#define ENCODER_A_PIN 2  //编码器A针
#define ENCODER_B_PIN 3  //编码器B针
#define SWITCH_PIN    4  //编码器按键
#define KEY_VOLUP     5  //主控音量加
#define KEY_VOLDN     6  //主控音量减
#define KEY_PRE       7  
int val = 1;             //val储存按钮的状态；
int old_val = 1;         //暂存val变量的上一个时间单位；
int old_A = 1;
int old_B = 1;
int state = 0;          
int now_A;
int now_B;
int now_A_check;

void setup() {           
  pinMode(ENCODER_A_PIN, INPUT);    
  pinMode(ENCODER_B_PIN, INPUT);    
  pinMode(SWITCH_PIN, INPUT);  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
  attachInterrupt(0, read_PIN2_change, CHANGE);  //在UNO中，中断口0是指Pin2；中间的中断函数译‘读取跳变’；CHANGE触发是指电平交替变换；
  //外部中断说明：attachInterrupt(interrupt, function, mode);//interrupt为你中断通道编号，function为中断函数，mode为中断触发模式；

  digitalWrite(KEY_VOLUP,LOW);
  digitalWrite(KEY_VOLDN,LOW);
   digitalWrite(KEY_PRE,LOW);
}

void loop()
{                                        //循环程序开始，读取两次为防止误触发，读取成功后才在串口打印出来；
  val = digitalRead(SWITCH_PIN);       //读取按钮信息，平时是高电平，不按下时，都是高电平；
  old_A = digitalRead(ENCODER_A_PIN);  //读取空闲状态下的编码器A针数值；
  old_B = digitalRead(ENCODER_B_PIN);  //读取空闲状态下的编码器B针数值；

  if (val == LOW)
  {                                      //读取SWITCH_PIN脚值，如果等于LOW，则延迟10毫秒；
    delay(10);
    if ((val == LOW) && (old_val == HIGH))
    {                                      //读取SWITCH_PIN脚值，如果两次确认后等于LOW，则
      state = 1 - state;
    }
  }
 
  old_val = val;         //重要：old_val的值赋值成现时val的值，告诉程序‘按键已被按下一次’，如果按钮不释放再按下，LED状态不会被改变；

  if (state == 1)                                   //LED变量 状态判断，然后决定是否点亮LED灯；
  { digitalWrite(KEY_PRE,HIGH); //给三极管1基级导通信号 控制短接主控c1 r1
    delay(500);
    digitalWrite(KEY_PRE,LOW);
  }
  else {
   digitalWrite(KEY_PRE,LOW);
  }
}

void read_PIN2_change()  //编码器旋转检测函数
{
  now_A = 1 - old_A;
  now_B = digitalRead(ENCODER_B_PIN);
  now_A_check = digitalRead(ENCODER_A_PIN);
 

  if ((old_B == now_B) && (old_A == old_B) && (old_A != now_A) && (now_A_check == now_A))
  { Serial.println("ENCODER -");
    digitalWrite(KEY_VOLDN,HIGH); //给三极管1基级导通信号 控制短接主控c1 r1
    delay(500);
    digitalWrite(KEY_VOLDN,LOW);
  }

  if ((now_A == now_B) && (old_A != now_A) && (now_A_check == now_A))
  { Serial.println("ENCODER +");
  digitalWrite(KEY_VOLUP,HIGH); //给三极管2基级导通信号 控制短接主控c2 r1
    delay(500);
    digitalWrite(KEY_VOLUP,LOW);
  }
  
}
