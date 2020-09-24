## start_VM_Headless  简易 VirtualBox Headless 模式启动器

## 使用注意和方法
- Oracle VM VirtualBox 默认安装目录
```
C:\Program Files\Oracle\VirtualBox\
```

- 安装虚拟机 Debian 系统，VM实例名字  debian

- 本工具 Start_VM_Headless 用来启动 debian 的VM实例

![](https://raw.githubusercontent.com/hongwenjun/start_VM_Headless/master/img/Start_VM_Headless.png)


### 启动器原理
```
::  将VirtualBox里安装的虚拟机在后台运行方法（在状态栏隐藏窗口）

CD  "C:\Program Files\Oracle\VirtualBox\"
.\VBoxManage.exe  startvm  debian --type headless


将VirtualBox里安装的虚拟机在后台运行方法（在状态栏隐藏窗口）
由于工作和学习需要，经常要开一个虚拟机开测试和开发，虚拟机选择Oracle公司的VirtualBox，经常开着这个窗口感觉有些浪费资源，这样隐藏窗口就在需求了。

将VirtualBox里安装的虚拟机在后台运行方法（在状态栏隐藏窗口）

开始=>运行=>cmd进入DOS窗口
d:
cd  D:\Program Files\VirtualBox
D:\Program Files\VirtualBox> .\VBoxManage.exe  startvm  master --type headless
这在Linux系统和MAC上同样适用，只要替换成相应的命令即可

 

解释：其中 master 是这个虚拟机的名称

Headless模式是系统的一种配置模式。在该模式下，系统缺少了显示设备、键盘或鼠标。
Headless模式针对在该模式下工作，尤其是服务器端程序开发者。因为服务器（如提供Web服务的主机）往往可能缺少前述设备，但又需要使用他们提供的功能，生成相应的数据，以提供给客户端（如浏览器所在的配有相关的显示设备、键盘和鼠标的主机）。
```