## linux第二课  编辑器

1.vim是一款多模式的编辑器

2.命令模式/插入模式/底行模式/替换模式/视图模式

3.u 撤销

yy 复制

p写出

shitf +g 回到最后一行

shift ~ 大小写切换

程序的编译

预处理  ->编译->汇编->链接

预处理阶段：去掉注释,条件编译 宏替换 头文件展开 -E

编译：c转化为汇编 -s

汇编：汇编语言转化成二进制 -c

链接： -o

\1. 预处理（进行宏替换) 

\2. 编译（生成汇编) 

\3. 汇编（生成机器可识别代码） 

\4. 连接（生成可执行文件或库文件

**gcc****选项** 

\-

E 只激活预处理,这个不生成文件,你需要把它重定向到一

个输出文件里面 

\-

S 编译到汇编语言不进行汇编和链接 

\-

c 编译到目标代码 

\-

o 文件输出到 文件 

\-

static 此选项对生成的文件采用静态链接 

\-

g 生成调试信息。GNU 调试器可利用该信息。 

\-

shared 此选项将尽量使用动态库，所以生成文件比较小，但是需要系统由动态库。

O0 

O1 

O2 

O3 编译器的优化选项的4个级别，

O0表示没有优化,

O1为缺省值，

O3优化级别最高 

w 不生成任何警告信息。 

Wall 生成所有警告信息。

vim(命令模式 插入模式 底行模式 替换模式)配置

gcc g++:

动态链接（defalut）/-g，静态链接 -static

gdb:-g,list/l/b/ingo b/r/n/s/c/finish

make/makefile:make是一个命令，makefile是一个文件

.PHONY是伪目标

项目生成+项目清理

进度条：\r和\n 缓冲区概念 ,fflush(stdout)

