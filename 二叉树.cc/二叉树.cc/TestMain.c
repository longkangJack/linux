#ifndef _TEST_
#define _TEST_
#include"common.h"
#include"bintree.h"

int main()
{
	char *str = "ABC##DE##F##G#H##";
	char *str1 = "ABC##D#F##GE##H##";
	BinTree bt,bt1;//节点一级指针
	int i = 0;
	int j = 0;
	BinTreeInit(&bt);
	BinTreeInit(&bt1);
	//BinTreeCreate(&bt);
	BinTreeCreateByStr(&bt,str,&i);
	BinTreeCreatByStr(&bt1,str1,&j);
	//BinTreeInit(&bt);
	/*bt = BinTreeCreate_2();*/
	return 0;
} 
#endif