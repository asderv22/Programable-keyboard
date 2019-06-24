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
pcb源码展示为files/keyboard.json<br>
可导入lceda编辑 <br>
**pcb制造Gerber文件展示在files/Gerber_keyboard.zip** <br>
**使用lceda绘制 生产前请使用Gerber浏览器检查要求** <br>
**提供alitumdesigner文件 由lceda导出 展示为files/keyboard.pcbdoc** <br>
**由于是导出文件 不确保准确性与可用性 具体参考lceda对于导出文件的解释** <br>
https://docs.lceda.cn/cn/Export/Export-Altium/index.html <br>
<br>
**打印件使用Sketchup绘制并输出stl** <br>
**由于Sketchup特殊的实体密封 不保证所有切片软件&上位机不出错** <br>
**打印前请检查切片结果** <br>
