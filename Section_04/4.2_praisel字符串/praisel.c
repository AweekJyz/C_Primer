/* praisel.c -- ʹ�ò�ͬ�����ַ���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //�ṩstrlen()������ԭ��
#define PRAISE "You are an extraordinary being." //#�����ַ�������. #����������ĩβ���Ͽ��ַ�. #�ô�д��ʾ���ų�����C����һ��Ĵ�ͳ
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);	//һ�����, ����% sת��˵��, scanf()ֻ���ȡ�ַ����еĵ�һ������, ������һ����. 
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells. \n", strlen(name), sizeof name/*���Ǻ���, ���Բ�������*/);
	//��ʱʹ��Բ����ȡ����������������ͻ����ض���, ���ǽ�����������¶�ʹ��Բ����
	printf("The phrase of praise has %zd letters and occupies %zd memory cells. \n", strlen(PRAISE), sizeof PRAISE);
	//sizeof �������	strlen()ʹ�����		��������������ֵ����unsigned����unsigned long������%u����%luҲ����
	return 0;
}