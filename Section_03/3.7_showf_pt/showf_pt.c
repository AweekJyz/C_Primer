/* showf_pt.c -- �����ַ�ʽ��ʾfloat���͵�ֵ */
#include <stdio.h>
#include <math.h>
int main(void)
{
	float aboat = 32000.0345386345286454654655423486245554;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);//Ϊʲô? 32000.035156 can be written 3.200004e+04
	//float ����ͨ��ʹ�� IEEE 754 �����׼����ʹ������������λ����ʾ������������޷���ȫ��ȷ�ر�ʾ����ʮ����С����
	// ��һ��Ҫ�������֧��C99�����е��������
	printf("And it's %A %a in hexadecimal, powers of 2 notation. \n", dip, dip);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n %e", dip, dip, dip);

	float underflow = 0.1234e-40;
	printf("%e\n", underflow);
	double sin = asin(9); //������Χ��ʾ-nan(ind)
	printf("%f\n", sin);

	float a, b;

	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	return 0;
}