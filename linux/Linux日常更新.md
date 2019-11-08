# Linux日常更新

**系统经典语录：**
 **1、命令操作完没有任何消息信息, 就是最好的消息**
 **2、系统一切从根开始**
 **3、系统中数据一切皆文件**

**一、linux关机命令：**

1.shutdown命令安全地将系统关机（推荐）参数说明:

```bash
[-r] 重启计算器。
[-h] 关机后关闭电源〔halt〕。
[-c] cancel current process取消目前正在执行的关机程序。
[-time] 设定关机〔shutdown〕前的时间。

shutdown -h  now   	=	立刻关机
shutdown -h  时间  	= 	时间关机
shutdown -r  now  	=	立即重启
shutdown -h  10     =	十分钟后关机

```

2.简提一下 halt 也可单独使用，也可达到关机的效果，但halt命令是其实halt就是调用shutdown -h。halt执行时，杀死应用进程，执行sync系统调用，内核停止，可能导致linux系统的死机，需要重启。
3.poweroff 会发送一个 ACPI 信号来通知系统关机。(别人告诉的)

4.init 进程一共分为7个级别, 0和6分别代表关闭和重启

**二、linux重启命令：**

reboot 执行重启命令.

**三、linux查询所在位置路径：pwd**

```bash
[root@www network-scripts]# pwd
/etc/sysconfig/network-scripts

```

**四、linux切换目录：cd**

```bash
[root@www network-scripts]# cd -
/root
[root@www ~]#
```

##### 五、linux创建目录文件：mkdir

 

**参数：-p 递归创建**

```bash
[root@www /]# mkdir 123
[root@www /]# mkdir -p /123/123
```

##### 六、linux以树形结构展示目录结构：tree

 

**参数：-L ：指定层数  -d：只显示目录**

```bash
[root@lizhiming ~]# tree -d /boot
/boot
├── efi
│?? └── EFI
│??     └── centos
├── grub
└── grub2
    ├── fonts
    ├── i386-pc
    └── locale

```

##### 七、linux查看命令：ls

 

参数：**-l ：长格式显示  -a ：显示所有文件  -d ：显示目录**

##### 八、linux复制命令：cp

 

**注释：111是目录文件，222是文本**
 **参数：- r  递归   -i 是否覆盖确认  -a 相当于dpr    -p保持文件或目录树形**

```
[root@www 123]# ls
111  222
[root@www 123]# cp 222 /456/999
[root@www 123]# cd /456
[root@www 456]# ls
999
[root@www 456]# cp -r /123/111 /456/888
[root@www 456]# ls
888  999
```

##### 九、linux删除命令：rm

 

**参数：- r 递归 - f 强制  两个一起用你可以删掉世界（很暴力很血腥，危险的命令）**

 

```bash
[root@www /]# rm -rf /123 /456
```

**十、linux更改命令别名：alias**

**删除别名：unalias**

[root@www /]# alias ls='echo 看个锤子啊，笨蛋不配看内容'
[root@www /]# ls
看个锤子啊，笨蛋不配看内容
[root@www /]# unalias ls
[root@www ~]# ls
anaconda-ks.cfg

##### 十一、linux移动命令：mv

 

**参数：- t 把所用源参数移动到目录中**
 **在相同路径目录中使用相当于改名，在不同路径中相当于移动**

##### 十二、linux打印输出命令：echo

参数：-h 不换行   - e 支持转义    \t 代表top    \n 代表回车

[root@www /]*# echo 8* 

8

### 十三、linux创建文件或更新文件时间戳：touch

[root@yu yuxi]# touch 123
[root@yu yuxi]# ll
total 0
-rw-r--r--. 1 root root 0 Oct 21 19:18 123
[root@yu yuxi]# touch 123
[root@yu yuxi]# ll
total 0
-rw-r--r--. 1 root root 0 Oct 21 19:19 123

##### 十四、linux创建查看文件内容：cat

 

**参数： -n 显示行号**

 

```bash
[root@yu yuxi]# cat 123
123
123
123
[root@yu yuxi]# cat -n 123
     1	123
     2	123
     3	123
```

##### 十五、linux查看文件类型：file

 

```bash
[root@yu yuxi]# file /usr/bin/cp
```

##### 十六、linux：查命令所在路径：which

 

```bash
[root@yu xuexi]# which cp
alias cp='cp -i'
	/usr/bin/cp
```

##### 二十一、	查找目录下文件：find

 

**参数：**

 

| 参数    | 用途                                                  |
| ------- | ----------------------------------------------------- |
| - name  | 按文件名查找                                          |
| - type  | 按文件类型查找(后面接文件类型参数,例如：目录 d 文件 f |
| - exec  | 对搜索结果在处理                                      |
| - mtime | 按修改时间查找                                        |

[root@yu xuexi]# find / -name cp
/usr/bin/cp
[root@yu xuexi]# find /yuxi/ -type f
/yuxi/xuexi/ruanlianjie.txt
/yuxi/shangke/123.txt

