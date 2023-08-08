#include <stdio.h>
int print() //不能是main函数, 一个源文件里面只能有一main函数. 
{
	printf("Hello world!");
	return 0;
}
