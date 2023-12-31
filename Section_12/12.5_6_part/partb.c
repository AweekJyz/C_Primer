// partb.c -- 程序其他部分
#include<stdio.h>

extern int count;	//引用式声明变量, 外部链接

static int total = 0;	//静态变量, 内部链接
void accumulate(int k); //k具有块作用域, 无链接

void accumulate(int k) //k具有块作用域, 无链接
{
	static int subtotal = 0;

	if (k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}