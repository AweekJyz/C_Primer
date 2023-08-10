/* showf_pt.c -- 以两种方式显示float类型的值 */
#include <stdio.h>
#include <math.h>
int main(void)
{
	float aboat = 32000.0345386345286454654655423486245554;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);//为什么? 32000.035156 can be written 3.200004e+04
	//float 类型通常使用 IEEE 754 浮点标准，它使用有限数量的位来表示浮点数，因此无法完全精确地表示所有十进制小数。
	// 下一行要求编译器支持C99或其中的相关特性
	printf("And it's %A %a in hexadecimal, powers of 2 notation. \n", dip, dip);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n %e", dip, dip, dip);

	float underflow = 0.1234e-40;
	printf("%e\n", underflow);
	double sin = asin(9); //超出范围显示-nan(ind)
	printf("%f\n", sin);

	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	return 0;
}