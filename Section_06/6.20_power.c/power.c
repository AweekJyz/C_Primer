// power.c -- 计算数的整数幂
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double power(double n, int p);//ANSI函数原型
int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)	//只输入一个数字回车会等待输入第二个数字
	{
		xpow = power(x, exp);	//函数调用
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);		//.xg是有x个有效数字 g为自动使用%f或者%e
		//答案不精确
		printf("Enter next pair of numbers or q to quit.\n");
	}

	return 0;
}
double power(double n, int p)	//定义函数
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;

	return pow;
}