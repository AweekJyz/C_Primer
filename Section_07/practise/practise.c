// pratise -- ������֧������ϰ
#include "practise.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;//���
	int i_scanf = 0;

	printf("���������(1~%d)(����0�˳�): ", TOTAL);
	i_scanf = scanf("%d", &i);//��һ������
	while( i != 0)
	{
		while ((i_scanf != 1) || (i < 0 || i > TOTAL))
		{
			if (i_scanf != 1)
				printf("����Ĳ�������, ������1��%d������. \n",
					TOTAL);
			else
				printf("�����������Χ����. ������1��%d������. \n ", 
					TOTAL);
			while (getchar() != '\n')
				continue;
			printf("���������(1~%d)(����0�˳�): ", TOTAL);
			i_scanf = scanf("%d", &i);
			//Ҫ���ÿ��ѭ��ÿ���Ƿ񶼸���������
		}
		while (getchar() != '\n')
			continue;//��յ�һ������Ļ���
		switch (i)
		{
		case 1:
			printf("��һ��\n");
			repo_char();
			break;
		case 2:
			printf("�ڶ���\n");
			char_ascii();
			//char_ascii_2();
			break;
		case 3:
			printf("������\n");
			odd_average();
			break;
		case 4:
			printf("������\n");
			replace();
			break;
		case 5:
			printf("������\n");
			replace_switch();
			break;
		case 6:
			printf("������\n");
			ei_count();
			break;
		case 7:
			printf("������\n");
			salary();
			break;
		case 8:
			printf("�ڰ���\n");
			salary_choice();
			break;
		case 9:
			printf("�ھ���\n");
			small_prime();
			break;
		case 10:
			printf("��ʮ��\n");
			tax1988();
			break;
		case 11:
			printf("��ʮһ��\n");

			break;
		default:
			printf("Oops!");
			break;
		}
		//while (getchar() != '\n')
		//��������, ���û�лس��ͻ�һֱ�������������
		//	continue;//��ջ���
		printf("Good!\n\n");
		printf("���������(1~%d)(����0�˳�): ", TOTAL);
		i_scanf = scanf("%d", &i);
		
	}
	printf("Bye! See you next time!\n");

	return 0;
}