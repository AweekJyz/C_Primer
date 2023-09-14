#include "films.h"
#include <stdio.h>
extern void port(void);
int main(void)
{
	//使用数组
	printf("This is the result of arrary.\n");
	arrary();
	putchar('\n');
	//使用链表
	puts("This is the result of linked list.");
	linked_list();
	//使用抽象数据类型ADT
	puts("This is the result of ADT.");
	port();
	puts("Bye!\n");

	return 0;
}