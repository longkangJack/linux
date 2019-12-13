## linux 命令1

ls   -a：详细显示

ls  -l：显示当前文件

cd：进入目录

touch：创建文件

mkdir :创建目录

echo ：输出重定向:默认生成文件

cat :显示文件内容

pwd：显示当前路径

mkdir -p：连续创建目录

绝对路径:从根目录开始

相对路径:从当前目录开始

cp:拷贝文件 

cp: .. 到上级目录

rm:rm -f:强制删除

rm -rf：递归删除所有文件

rm:rm -r 删除目录 

sudo +命令  超级用户执行

root 和 普通 ：区别 权限问题

y:yes

》：追加重定向

cat<file.c:输入重定向

一切皆文件：linux中

head:

tail:

"|"管道：将下一条命令 接上.

wc:显示剩下

cal：日历

bc:计算器

quit:退出

clear:清空

mv:移动文件

mv:重命名

more:分屏显示 只能下翻

less:分屏显示  可以上下翻

gcc -o mytest <file.c>linux 编译

find:查找

fine ~ -name <file.c>

/home

~home

~当前工作目录(在当前目录查找)

tar:打包压缩

tar -czf a.tgz <file.c><test.c>

*当前目录下的所有文件

tar: xzf a.tgz :解压

su -:切换用户

man:图书馆命令

ctrl +d :退出当前用户

关机命令:

shutdown -h

shutdown -r

shut -t +秒数

rmdir :只能删除空目录

rm -r:删除目录(递归目录)  -f ：免确认

cp:copy

mv:重命名文件

linux中用户的分类

所有者u 同组用户g 其他人o

文件权限

读 r 写 w 执行 x 没有权限 -

-：普通文件

d：目录文件

l：链接文件

p：管道文件

c:字符设备文件

s：套接口文件

chmod:改变权限

   u-r 表示所有者失去读的权限 ,a+rwx 所有人加权限

ls -al :显示到权限

两个大于号表示追加

chown:修改文件的拥有者

file:查看类型

八进制修改权限：7 5 5 rwx  r-x r-x

root:root 两个都变 用chown

粘滞位对特定目录进行设置

dev 目录的所有者 第二个dev 文件的所有者

验证网络畅通

ping . www.baidu.com

yum list | grep .... :罗列软件,查找某个软件

sudo yum install  +名字

sudo yum remov +名字

yum clean all 命令可以清除缓存中老旧的头文件和软件包

uname -r 输出linux内核的版本信息

mkdir没有-d和-f选项； 

  -m设置用户权限 

  -p若果路径中某些目录不存在，系统会自动创建，通常是创建父目录 

grep -E ^a try_grep

查看该文件中存在a内容和的部分

top命令查看cpu

```css
rm *.c
find . -name "*.c" -maxdepth 1 | xargs rm
```

由于题目中是说删除当前目录下后缀名为.c的文件，故需要加上-maxdepth 1，表示是当前目录，不包括其子目录







