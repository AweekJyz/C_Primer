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
int pra_1(void) //��дһ��������ʾ�û����������գ�Ȼ���ԡ���,�ա��ĸ�ʽ��ӡ������
{
	char ming[20] = "\0", xing[20] = "\0";

	printf("���������������(�ÿո����): ");
	scanf("%s%s", ming, xing);
	printf("%s,%s\n\n", ming, xing);

	return 0;
}
int pra_2(void)
{
	char name[40] = "\0";
	int namelen = 0;

	printf("�������������: ");
	scanf("%s", name);
	namelen = strlen(name);
	printf("\"%s\"\n", name);				//a����ӡ���֣�����˫���ţ�
	printf("\"%20s\"\n", name);				//b���ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
	printf("\"%-20s\"\n", name);			//c���ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
	printf("%*s\n\n", namelen + 3, name);	//d���ڱ�������ȿ�3���ֶ��д�ӡ���֡�

	return 0;
}
int pra_3(void) //��дһ�����򣬶�ȡһ����������������С�����������ӡ��Ȼ����ָ����������ӡ��
{
	float flt = 0.0;

	printf("����������һ��С��: ");
	scanf("%f", &flt);
	printf("The input is %.1f or %.1e.\n", flt, flt);
	printf("The input is %+.3f or %.3E.\n\n", flt, flt);

	return 0;
}
int pra_4(void)
{
	float hight = 0.0;
	char name[40] = "\0";

	printf("��������ߣ���λ: Ӣ�磩: ");
	scanf("%f", &hight);
	printf("����������: ");
	scanf("%s", name);
	printf("%s, you are %.3f feet tall. \n\n", name, hight);

	return 0;
}
int pra_5(void)
{
	float v = 0.0, m = 0., t = .0; //v�����ٶ�, m�ļ���С, t����ʱ��

	printf("�����������ٶȺ��ļ���С(�ÿո����): ");
	scanf("%f%f", &v, &m);
	t = m / v;
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n\n", v, m, t);

	return 0;
}
int pra_6(void)
{
	char ming[20] = "\0", xing[20] = "\0";
	int minglen =0, xinglen = 0;

	printf("��������: ");
	scanf("%s", ming);
	printf("��������: ");
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

	printf("���������е����(Ӣ��)�����ĵ�������(����): ");
	scanf("%f%f", &s, &l);
	k = yingli / jialun;
	printf("ŷ�޵ı�׼Ϊ%.5fӢ��ÿ����", s / l);
	printf("ŷ�޵ı�׼Ϊ%.5f��ÿ100����", (l / s) * k);
	
	
	return 0;
}