#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <float.h>
int pra_1(void);
int pra_2(void);
int pra_3(void);
int pra_4(void);
int pra_5(void);
int pra_6(void);
int pra_7(void);
int pra_8(void);
int pra_9(void);

int main(void)
{
	pra_1();
	pra_2();
	pra_3();
	pra_4();
	pra_5();
	pra_6();
	pra_7();
	pra_8();
	pra_9();

	return 0;
}
int pra_1(void) //把用分钟表示的时间转换成用小时和分钟表示的时间。
{
#define M_TO_H 60
	int time = 0, min = 0, hour = 0;

	printf("请输入分钟表示的时间(<=0停止): ");
	scanf("%d", &time);
	while (time > 0)
	{
		min = time % M_TO_H;
		hour = time / M_TO_H;
		printf("%d分钟为%d小时%d分钟\n", time, time / M_TO_H, time % M_TO_H);
		printf("%d分钟为%d小时%d分钟\n\n", time, hour, min);
		printf("请再次输入(<=0停止): ");
		scanf("%d", &time);
	}
	printf("\n\n");

	return 0;
}
int pra_2(void)//提示用户输入一个整数，然后打印从该数到比该数大10的所有整数
{
	int ran = 0, i = 0;

	printf("请输入一个整数: ");
	scanf("%d", &ran);
	while (i <= 10)
	{
		printf("%d ", ran++);
		i++;
	}
	printf("\n\n");

	return 0;
}
int pra_3(void) //提示用户输入天数，然后将其转换成周数和天数。
{
#define D_TO_W 7
	int time = 0, day = 0, week = 0;

	printf("请输入天数(<=0停止): ");
	scanf("%d", &time);
	while (time > 0)
	{
		day = time % D_TO_W;
		week = time / D_TO_W;
		printf("%d days are %d weeks, %d days.\n", time, time / D_TO_W, time % D_TO_W);
		printf("%d days are %d weeks, %d days.\n\n", time, week, day);
		printf("请再次输入(<=0停止): ");
		scanf("%d", &time);
	}
	printf("\n\n");

	return 0;
}
int pra_4(void)
{
#define C_TO_I (13.3 / 5.3)//一英寸多少厘米
#define C_TO_F ((182.0 - 11.7 * C_TO_I) / 5)//一英尺多少厘米
//预处理指令define替换表达式要确保是一个整体, 否则作为子表达式, 顺序会影响结果
	float cm = 0.0,  inches = 0.0;
	int feet = 0;
	double a = C_TO_F / C_TO_I;
	printf("%f %lf\n", C_TO_F / C_TO_I, a);
	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		feet = cm / C_TO_F;
		inches = (cm - feet * C_TO_F) / C_TO_I;
		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
		printf("Enter a height in centimeters (<=0 to quit): \n");
		scanf("%f", &cm);
	}
	printf("\n\n");

	return 0;
}
int pra_5(void)
{
	int count, sum, n;         

	count = 0;                 
	sum = 0;                   
	printf("请输入天数: ");
	scanf("%d", &n);
	while (count++ < n)        
	{
		sum = sum + count;
		printf("%-4d %-4d\n", count * count, sum);
	}
	printf("sum = %d\n\n", sum); 

	return 0;
}
int pra_6(void)
{
	int count, sum, n;         

	count = 0;                 
	sum = 0;                   
	printf("请输入天数: ");
	scanf("%d", &n);
	while (count++ < n)
	{
		sum = sum + count * count;//平方和
		printf("%-4d %-4d\n", count * count, sum);
	}
	printf("sum = %d\n\n", sum); 

	return 0;
}
int pra_7(void)
{
	double b = 0.0;
	double cube(double a);

	printf("%lf\n\n", cube(b));

	return 0;
}
double cube(double a)//不允许在函数里面嵌套定义函数
{
	printf("请输入一个小数: ");
	scanf("%lf", &a);
	return a * a * a;
}
int pra_8(void)
{
	int s = 0.0, l = 0.0, k = 0.0;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &s);//除数
	printf("Now enter the first operand: ");
	scanf("%d", &l);//被除数
	while (l > 0)
	{
		printf("%d %% %d is %d\n", l, s, l % s);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &l);//更新被除数l值
	}
	printf("Done\n\n");

	return 0;
}
int pra_9(void)
{
	double hTem = 0.0;
	int n = 0;

	printf("请输入一个华氏温度(q退出): ");
	 n = scanf("%lf", &hTem);//初始化和赋值有什么区别
	//while(hTem != 'q')
	while (n == 1)//用scanf返回值判断
	{
		n = 0;//使n不为1
		Temperatures(hTem);
		printf("请再次输入(q退出): ");
		n = scanf("%lf", &hTem);//再次赋值n
	}
	printf("End%d\n\n", n);

	return 0;
}
int Temperatures(double a)
{
	double sTem = 0.0, kTem = 0.0;

	sTem = 5.0 / 9.0 * (a - 32.0);	//摄氏温度
	kTem = sTem + 273.16;			//开尔文温度
	printf("华氏度为%.2f, 摄氏度为%.2f, 开氏温度为%.2f.\n", a, sTem, kTem);

	return 0;
}