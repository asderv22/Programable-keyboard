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
**这两个部分是为了配合arduino实现短接主控板C/R控制脚 具体原理图在files/encoder.pdf** <br>
