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
int pra_1(void) //���÷��ӱ�ʾ��ʱ��ת������Сʱ�ͷ��ӱ�ʾ��ʱ�䡣
{
#define M_TO_H 60
	int time = 0, min = 0, hour = 0;

	printf("��������ӱ�ʾ��ʱ��(<=0ֹͣ): ");
	scanf("%d", &time);
	while (time > 0)
	{
		min = time % M_TO_H;
		hour = time / M_TO_H;
		printf("%d����Ϊ%dСʱ%d����\n", time, time / M_TO_H, time % M_TO_H);
		printf("%d����Ϊ%dСʱ%d����\n\n", time, hour, min);
		printf("���ٴ�����(<=0ֹͣ): ");
		scanf("%d", &time);
	}
	printf("\n\n");

	return 0;
}
int pra_2(void)//��ʾ�û�����һ��������Ȼ���ӡ�Ӹ������ȸ�����10����������
{
	int ran = 0, i = 0;

	printf("������һ������: ");
	scanf("%d", &ran);
	while (i <= 10)
	{
		printf("%d ", ran++);
		i++;
	}
	printf("\n\n");

	return 0;
}
int pra_3(void) //��ʾ�û�����������Ȼ����ת����������������
{
#define D_TO_W 7
	int time = 0, day = 0, week = 0;

	printf("����������(<=0ֹͣ): ");
	scanf("%d", &time);
	while (time > 0)
	{
		day = time % D_TO_W;
		week = time / D_TO_W;
		printf("%d days are %d weeks, %d days.\n", time, time / D_TO_W, time % D_TO_W);
		printf("%d days are %d weeks, %d days.\n\n", time, week, day);
		printf("���ٴ�����(<=0ֹͣ): ");
		scanf("%d", &time);
	}
	printf("\n\n");

	return 0;
}
int pra_4(void)
{
#define C_TO_I (13.3 / 5.3)//һӢ���������
#define C_TO_F ((182.0 - 11.7 * C_TO_I) / 5)//һӢ�߶�������
//Ԥ����ָ��define�滻���ʽҪȷ����һ������, ������Ϊ�ӱ��ʽ, ˳���Ӱ����
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
	printf("����������: ");
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
	printf("����������: ");
	scanf("%d", &n);
	while (count++ < n)
	{
		sum = sum + count * count;//ƽ����
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
double cube(double a)//�������ں�������Ƕ�׶��庯��
{
	printf("������һ��С��: ");
	scanf("%lf", &a);
	return a * a * a;
}
int pra_8(void)
{
	int s = 0.0, l = 0.0, k = 0.0;

	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &s);//����
	printf("Now enter the first operand: ");
	scanf("%d", &l);//������
	while (l > 0)
	{
		printf("%d %% %d is %d\n", l, s, l % s);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &l);//���±�����lֵ
	}
	printf("Done\n\n");

	return 0;
}
int pra_9(void)
{
	double hTem = 0.0;
	int n = 0;

	printf("������һ�������¶�(q�˳�): ");
	 n = scanf("%lf", &hTem);//��ʼ���͸�ֵ��ʲô����
	//while(hTem != 'q')
	while (n == 1)//��scanf����ֵ�ж�
	{
		n = 0;//ʹn��Ϊ1
		Temperatures(hTem);
		printf("���ٴ�����(q�˳�): ");
		n = scanf("%lf", &hTem);//�ٴθ�ֵn
	}
	printf("End%d\n\n", n);

	return 0;
}
int Temperatures(double a)
{
	double sTem = 0.0, kTem = 0.0;

	sTem = 5.0 / 9.0 * (a - 32.0);	//�����¶�
	kTem = sTem + 273.16;			//�������¶�
	printf("���϶�Ϊ%.2f, ���϶�Ϊ%.2f, �����¶�Ϊ%.2f.\n", a, sTem, kTem);

	return 0;
}