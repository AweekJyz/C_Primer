// talkback.c -- ��ʾ���û�����
#define _CRT_SECURE_NO_WARNINGS //������ڵ�һ��, Ϊʲô?				ֻҪ��֤��stdio.h֮ǰ����
//����ָ������ļ��Ŀ�ͷ��Ϊ��ȷ�������κα�׼�⺯��������֮ǰ��Ч

#include <string.h>		//�ṩstrlen()������ԭ��
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DENSITY 62.4F	//�����ܶ�

int main()
{
	float weight, volume;
	int size, letters;
	char name[40] = {'\0'};		//����40���ַ�������		û��\0���о���c6054

	printf("Hi! What's your first name\?\n"); //����ת��Ҳ���Բ�ת��
	scanf("%s", name);	//�ַ��������ǵ�ַ
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);	//sizeof���ֽ�λ��λ�ĳ���
	letters = strlen(name);	//�ַ�������
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %80.2f cubic feet. \n", name, volume);//�����2 ��ʾ��С���Ϊ 2 ���ַ�������С�����С�����֣���������
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it. \n", size);

	return 0;
}