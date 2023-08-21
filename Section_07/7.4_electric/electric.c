// electric.c -- ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define RATE1 0.13230								// �״�ʹ�� 360 kwh �ķ���
#define RATE2 0.15040								// ������ʹ�� 108 kwh �ķ���
#define RATE3 0.30025								// ������ʹ�� 252 kwh �ķ���
#define RATE4 0.34025								// ʹ�ó��� 720kwh �ķ���
#define BREAK1 360.0								// ���ʵĵ�1���ֽ��
#define BREAK2 468.0								// ���ʵĵ�2���ֽ��
#define BREAK3 720.0								// ���ʵĵ�3���ֽ��
#define BASE1 (RATE1 * BREAK1)						// ʹ��360kwh�ķ���
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // ʹ��468kwh�ķ���
#define BASE3 (BASE2 + (RATE3 *(BREAK3 - BREAK2)))	// ʹ��720kwh�ķ���
int main(void)
{
	double kwh, bill;

	printf("Please enter the kwh used. \n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)			//0~360kwh
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)		//360~468kwh
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)		//468~720kwh
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("The charge for %.lf kwh is $%1.2f. \n", kwh, bill);
	//printf("%c", tolower('Q'));
	/*1*/printf("%d ", isalnum('A'));//��������ַ���ASCII��?//����
	/*4*/printf("%d ", isdigit('3'));
	/*64*/printf("%d ", isblank(' '));
	/*0*/printf("%d ", isdigit(4));//���ȵ����ַ�, digit�жϵ����ַ�������
	/*4*/printf("%d ", isalnum('0'));
	/*2*/printf("%d ", isalnum('a'));
	/*2*/printf("%d ", isalnum('a'));//��ĸ���֣���ĸ�����֣�
	/*2*/printf("%d ", isalpha('a'));//��ĸ
	/*64*/printf("%d ", isblank(' '));//��׼�Ŀհ��ַ����ո�ˮƽ�Ʊ�����з������κ��������ػ�ָ��Ϊ�հ׵��ַ�
	/*0*/printf("%d ", iscntrl('C'));//�����ַ�����Ctrl + B
	/*4*/printf("%d ", isdigit('7'));//����
	/*2*/printf("%d ", isgraph('a'));//���ո�֮�������ɴ�ӡ�ַ�
	/*2*/printf("%d ", islower('a'));//Сд��ĸ
	/*2*/printf("%d ", isprint('a'));//�ɴ�ӡ�ַ�
	/*16*/printf("%d ", ispunct(','));//�����ţ����ո����ĸ�����ַ�������κοɴ�ӡ�ַ���
	/*8*/printf("%d ", isspace('	'));//�հ��ַ����ո񡢻��з�����ҳ�����س�������ֱ�Ʊ����ˮƽ�Ʊ�����������ػ�������ַ���
	/*1*/printf("%d ", isupper('A'));//��д��ĸ
	/*128*/printf("%d ", isxdigit('d'));//ʮ���������ַ�
				//��7.2��ctype.hͷ�ļ��е��ַ�ӳ�亯��
				//������ ��Ϊ
	/*l*/printf("%c ", tolower('L'));//��������Ǵ�д�ַ����ú�������Сд�ַ������򣬷���ԭʼ����
	/*U*/printf("%c ", toupper('u'));//���������Сд�ַ����ú������ش�д�ַ������򣬷���ԭʼ����
	//0��ƥ�� 1��д��ĸ 2Сд��ĸ 4���� 8�Ʊ�� 16���� 64�ո� 128ʮ���������� 
	//���ص���λ����
	return 0;
}
