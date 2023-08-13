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

	return 0;
}
int pra_1(void) //编写一个程序，提示用户输入名和姓，然后以“名,姓”的格式打印出来。
{
	char ming[20] = "\0", xing[20] = "\0";

	printf("请输入你的名和姓(用空格隔开): ");
	scanf("%s%s", ming, xing);
	printf("%s,%s\n\n", ming, xing);

	return 0;
}
int pra_2(void)
{
	char name[40] = "\0";
	int namelen = 0;

	printf("请输入你的名字: ");
	scanf("%s", name);
	namelen = strlen(name);
	printf("\"%s\"\n", name);				//a．打印名字，包括双引号；
	printf("\"%20s\"\n", name);				//b．在宽度为20的字段右端打印名字，包括双引号；
	printf("\"%-20s\"\n", name);			//c．在宽度为20的字段左端打印名字，包括双引号；
	printf("%*s\n\n", namelen + 3, name);	//d．在比姓名宽度宽3的字段中打印名字。

	return 0;
}
int pra_3(void) //编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
{
	float flt = 0.0;

	printf("请输入任意一个小数: ");
	scanf("%f", &flt);
	printf("The input is %.1f or %.1e.\n", flt, flt);
	printf("The input is %+.3f or %.3E.\n\n", flt, flt);

	return 0;
}
int pra_4(void)
{
	float hight = 0.0;
	char name[40] = "\0";

	printf("请输入身高（单位: 英寸）: ");
	scanf("%f", &hight);
	printf("请输入姓名: ");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall. \n\n", name, hight);

	return 0;
}
int pra_5(void)
{
	float v = 0.0, m = 0., t = .0; //v下载速度, m文件大小, t下载时间

	printf("请输入下载速度和文件大小(用空格隔开): ");
	scanf("%f%f", &v, &m);
	t = m / v;
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n\n", v, m, t);

	return 0;
}
int pra_6(void)
{
	char ming[20] = "\0", xing[20] = "\0";
	int minglen =0, xinglen = 0;

	printf("请输入名: ");
	scanf("%s", ming);
	printf("请输入姓: ");
	scanf("%s", xing);
	minglen = strlen(ming);
	xinglen = strlen(xing);
	printf("%s %s\n", ming, xing);
	printf("%*d %*c\n", minglen, 7, xinglen, 'a');
	printf("%s %s\n", ming, xing);
	printf("%-*d %-*c\n", minglen, 7, xinglen, 'b');


	return 0;
}
int pra_7(void)
{
	double a = 1.0 / 6.0;
	float b = 1.0 / 6.0;

	printf("%.6f\n%.12f\n%.20f\n\n", a, a, a);
	printf("%.6f\n%.12f\n%.16f\n\n", b, b, b);
	printf("%d, %d\n\n", FLT_DIG, DBL_DIG);

	return 0;
}
int pra_8(void)
{
	float s = 0.0, l = 0.0, k = 0.0;
	const float jialun = 3.785, yingli = 1.609;

	printf("请输入旅行的里程(英里)和消耗的汽油量(加仑): ");
	scanf("%f%f", &s, &l);
	k = yingli / jialun;
	printf("欧洲的标准为%.5f英里每加仑", s / l);
	printf("欧洲的标准为%.5f升每100公里", (l / s) * k);
	
	
	return 0;
}