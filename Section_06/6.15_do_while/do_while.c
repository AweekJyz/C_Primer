// do_while.c -- ��������ѭ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");//Ϊʲô���13
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n\n");

	//whileҲ����д���ȼ۵ĳ���, ���ǻ������һ��
	printf("To enter the triskaidekaphobia therapy club,\n");
	printf("please enter the secret code number: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n\n");
	//do while�ȼ��ڰ�ѭ���嵥���ó������ڿ�ͷ����ִ��һ��, ʹ�ó�������ִ��һ��ѭ�����еĴ���. 
	//�൱�ڰ�ѭ��������ݸ���һ�ݵ�for�ĵ�һ�����ʽ��?//���� 
	for (printf("To enter the triskaidekaphobia therapy club,\n"),
			printf("please enter the secret code number: "),
			scanf("%d", &code_entered); code_entered != secret_code;)
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number: ");
		scanf("%d", &code_entered);
	}
	printf("Congratulations! You are cured!\n\n");

	return 0;
}