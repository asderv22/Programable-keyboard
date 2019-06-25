# 自定义宏键盘 Programable-keyboard

这是一个4x4的全键自定义宏键盘 
----
This is a 4x4 full-key custom macro keyboard
----
Engish vision in part 2
----
<br>

可实现功能
----
如上文所述 这是一个16键的自定义宏键盘<br>
每个按键最大实现42行宏定义<br>
以及带有一个滚轮 两个方向模拟了两个不同按键 同样支持最大42行宏定义<br>


使用材料
----
主控板 x1 <br>
~~本来想用arduino实现的 但是我发现了这个好东西~~ <br>
https://item.taobao.com/item.htm?spm=a1z10.1-c.w4004-15650377400.5.524dda783n9xmD&id=548316293212  <br>
这是使用的键盘主控 带有上位机 不需要改代码就能编辑宏  <br>
MX键轴 x16 <br>
键帽 x16 <br>
定制pcb x1 设计文件和Gerber文件在files里 <br>

可选部分
----
这是提供滚轮功能的材料 <br>
不影响键盘部分工作 因此作为可选材料 <br>
机械式编码器 x1 <br>
**光电式当然更好 不过我提供的源码是针对机械式编码器的** <br>
arduino promini x1 <br>
**任何arduino都能工作 这里由于体积限制使用了promini** <br>
1kΩ 贴片电阻 封装0603 x6 <br>
9013 贴片三极管 封装sot-23 x3 <br>
**这两个部分是为了配合arduino实现短接主控板C/R控制脚 具体原理图在files/encoder/encoder.pdf**<br>
**代码在flies/encoder/encoder.ino**<br>

外观&安装
----
外壳采用3d打印方式加工 <br>
键帽我使用的是无刻键帽 再用pet贴纸打印图标黏贴在上面 <br>
经过最近的使用 牢固度挺好 不易掉色 是可选的键帽标识方案 <br>
由于主控板原因 没有再更换usb接口 ~~懒~~ 因此使用了miniusb接口~~2019年了~~ <br>
**外壳的usb开口根据miniusb尺寸设计 更换typec接口请确认尺寸是否正确** <br>

关于文件的重要解释
----
电路原理图在files里 展示为pdf文件 <br> 
原理图通过lceda绘制 .json文件是lceda源码 <br> 
**提供altiumdesigner文件 但不保证完整性与正确性** <br>
<br>
pcb源码展示为files/pcb/keyboard.json<br>
可导入lceda编辑 <br>
**pcb制造Gerber文件展示在files/pcb/Gerber_keyboard.zip** <br>
**使用lceda绘制 生产前请使用Gerber浏览器检查要求** <br>
**提供alitumdesigner文件 由lceda导出 展示为files/pcb/keyboard.pcbdoc** <br>
**由于是导出文件 不确保准确性与可用性 具体参考lceda对于导出文件的解释** <br>
https://docs.lceda.cn/cn/Export/Export-Altium/index.html <br>
<br>
**打印件使用Sketchup绘制并输出stl** <br>
**由于Sketchup特殊的实体密封 不保证所有切片软件&上位机不出错** <br>
**打印前请检查切片结果** <br>

# English vision

Functions
----
as its described, this is a 16-key custom macro keyboard<br>
with maximum 42-line macro definition per key <br>
and a wheel which can simulate two different keys, also support 42-line macro per key <br>

Materials used
----
controllerboard x1
~~I supposed to use an arduino,but later I found some excellent stuff for this project~~<br>
This is the link of the controller which is used in this project <br>
https://item.taobao.com/item.htm?spm=a1z10.1-c.w4004-15650377400.5.524dda783n9xmD&id=548316293212 <br>
*Unfortunately,I didn't find anything similiar to this on aliexpress/ebay*  <br>
MX switches x16 <br>
keycap x16 <br>
custom pcb x1 **the design files and Gerber files are shown in the flies/pcb  floder** <br>

Optional part
----
this is the part which provides the wheel<br>
it doesn't affect the normal function of the keyboard <br>
<br>
mechanical encoder x1 <br>
**photoelectric encoders are clearly better,but the sourcecode I provided is designed for a mechanical encoder**<br>
arduino pro mini x1 <br>
**any arduino should work,I used promini here due to voulme limitation** <br>
1kΩ surface-mount resistor **package 0603** x6   <br>
9013 surface-mount triode **package sot-23** x3 <br>
**this two components are usde to *short* the C/R pins on the controller with arduino**<br>
**specific diagram are shown in the files/encoder/encoder.pdf** <br>
**code is shown as files/encoder/encoder.ino**<br>

Appearance & installation
----
The case is 3d printed<br>
I used none-marking keycap and then paste the icon with PET stickers <br>
it seems to work well,and not faded during the recent use<br>
due to the controller board,the usb interface is still a mini-usb<br>
and the case was designed to fit the mini-usb controller<br>
please check the size if you swap the interface to a typec connector <br>

Important explainations of the files
----
the circuit diagrams are shown as .pdf files in the\files folder <br>
diagrams are drew using LCEDA **also known as easyeda worldwide** <br>
the .json files are LCEDA source codes which allows import and reedit <br>
<br>
the PCB is created via lceda<br>
sourcecodes are shown as files/pcb/keyboard.json <br>
also allows import and reedit <br>
**PCB Gerber files are shown as files/pcb/Gerber_keyboard.zip** <br>
**its created via lceda， please check with Gerber broswer before production**<br>
**Alitumdesigner files are provided, shown as files/pcb/keyboard.pcbdoc**<br>
**but they are exported by lceda,so the accuracy is unknown** <br>
**for more information,see the link below about lceda's exported files**<br>
https://docs.lceda.cn/en/Export/Export-Altium/index.html<br>
<br>
the 3d print .stl files are created via Sketchup <br>
due to the special solid sealing of Sketchup <br>
there might be small problems while using different slicing softwares (it works fine with cura) <br>
double check your slicing software before print <br>

