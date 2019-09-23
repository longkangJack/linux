proc:proc.c

	gcc - o $@ $^

	.PHONY:clean
	//make 程序
clean :

	 rm - f proc//makeclean
#include <stdio.h>

#include <string.h>

#include <unistd.h>



		 void proc()

	 {

			 const char *lable = "|/-\\";

			 int i = 0;

			 char bar[101];

			 memset(bar, '\0', sizeof(bar));



			 for (; i <= 100; i++)

			 {

				 printf("[%-100s][%d%%][%c]\r", bar, i, lable[i % 4]);

				 bar[i] = '#';

				 fflush(stdout);

				 usleep(100000);

			 }

			 printf("\n");

		 }//进度条代码



	 