#include "films.h"
#include <stdio.h>
extern void port(void);
int main(void)
{
	//ʹ������
	printf("This is the result of arrary.\n");
	arrary();
	putchar('\n');
	//ʹ������
	puts("This is the result of linked list.");
	linked_list();
	//ʹ�ó�����������ADT
	puts("This is the result of ADT.");
	port();
	puts("Bye!\n");

	return 0;
}