#define _CRT_SECURE_NO_WARNINGS//��newc++file.cpp���޸�Ĭ��
/* pkatinum.c -- your weight in platinum*/
#include <stdio.h>
extern int print();//û�еĻ� ����c4013
int main(void)
{
	float weight; //�������
	float value;  //��������İ׽��ֵ

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	//��ȡ�û�������
	scanf("%f", &weight);
	/*���豧���ļ۸���ÿ��˾$1700*/
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop, ");
	printf("eat more to maintain your value.\n");

	print();
	//getchar();

	return 0;
}