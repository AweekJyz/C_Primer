// where.c -- 数据被存储在何处？
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;
const char* pcg = "String Literal";
int main()
{
	int auto_store = 40;
	char auto_string[] = "Auto char Array";
	int* pi;
	char* pcl;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
		exit(EXIT_FAILURE);
	else
		*pi = 35;
	pcl = (char*)malloc(strlen("Dynamic String") + 1);
	if (pcl == NULL)
		exit(EXIT_FAILURE);
	else
		strcpy(pcl, "Dynamic String");
	printf("static_store: %d at		%p\n", static_store, &static_store);
	printf(" %s at		%p\n", "Quoted String", "Quoted String");
	printf(" %s at		%p\n", pcg, pcg);
	printf(" %s at		%p\n", pcl, pcl);
	//字符串是和字符不是一个维度, 所以字符的地址是字符串的标识符
	printf(" *pi: %d at			%p\n", *pi, pi);
	printf(" auto_store: %d at		%p\n", auto_store, &auto_store);
	printf(" %s at		%p\n", auto_string, auto_string);
	printf(" %p at		%p\n", pcl, &pcl);
	printf(" pi: %p at	%p\n", pi, &pi);

	free(pi);
	free(pcl);
	return 0;
}