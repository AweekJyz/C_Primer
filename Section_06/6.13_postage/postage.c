// postage.c -- 一类邮资
#include <stdio.h>
int main(void)
{
	const int FIRST_OZ = 46;
	const int NEXT_OZ = 20;
	int ounces, cost;

	printf(" ounces cost\n");
	for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)//可以多项并列
		//但如果并列的执行顺序会影响结果呢		例如; ; x++, y *= x//先第一个或者先第二个是不一样的 
		//从左向右执行, 逗号是序列点
		printf("%5d   $%4.2f\n", ounces, cost / 100.0);

	return 0;
}