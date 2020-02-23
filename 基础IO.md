## 基础IO

**hello.c****写文件** 

```
#include <stdio.h> 

#include <string.h> 

int main() 

{ 

 FILE *fp = fopen("myfile", "w"); 

 if(!fp){ 

 printf("fopen error!\n"); 

 } 

 const char *msg = "hello bit!\n"; 

 int count = 5; 

 while(count--){ 

 fwrite(msg, strlen(msg), 1, fp); 

 } 

 fclose(fp); 

 return 0; 

} 

```

```c
hello.c读文件
#include <stdio.h> 

\#include <string.h> 

int main() 

{ 

 FILE *fp = fopen("myfile", "r"); 

 if(!fp){ 

 printf("fopen error!\n"); 

 } 

 char buf[1024]; 

 const char *msg = "hello bit!\n";

while(1){

 ssize_t s = fread(buf, 1, strlen(msg), fp); 

 if(s > 0){ 

 buf[s] = 0; 

 printf("%s", buf); 

 } 

 if(feof(fp)){ 

 break; 

 } 

 } 

 fclose(fp); 

 return 0;
 }
```

3.输出信到显示器

```c
#include<stdio.h>
#inlcude<string.h>
int main()
{
    const char *msg = "hello fwrite\n";
    fwrite(msg,strlen(msg),1,stdout);
    printf("hello printf\n");
    fprintf(stdout,"hello fprintf\n");
    return 0;
}
```

**stdin & stdout & stderr** 

C默认会打开三个输入输出流，分别是stdin, stdout, stderr 

仔细观察发现，这三个流的类型都是FILE*, fopen返回值类型，文件指针 

打开文件方式

r      Open text file for reading.  

​              The stream is positioned at the beginning of the file.

  r+     Open for reading and writing.

​              The stream is positioned at the beginning of the file.

  w      Truncate(缩短) file to zero length or create text file for writing.

​              The stream is positioned at the beginning of the file.

 w+     Open for reading and writing.

 The file is created if it does not exist, otherwise it is truncated.

​              The stream  is  positioned at the beginning of the file.

 a      Open for appending (writing at end of file).  

​              The file is created if it does not exist. 

​              The stream is positioned at the end of the file

 a+     Open for reading and appending (writing at end of file).

​              The file is created if it does not exist.  The initial file  position 

​              for reading is at the beginning of the file, 

​              but output is always appended to the end of the file.

## 系统文件I/O

操作文件，除了上述C接口（当然，C++也有接口，其他语言也有），我们还可以采用系统接口来进行文件访问，

先来直接以代码的形式，实现和上面一模一样的代码：

hello.c 写文件:

```c

```

inode：一个文件一个inode，每个inode都有一个inode

目录文件:目录也是文件，也有inode

文件=内容+属性（inode）

目录的内容包含：目录下的文件名和inode id的映射

所以，给用户看的时候，看的是文件名，在文件系统里查找的时候看的是inode 的id