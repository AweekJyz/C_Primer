// func.c -- ��������
#include "films.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //malloc() free()

char* s_gets(char* st, int n)
{
	char* ret_val, * find;
	if (ret_val = fgets(st, n, stdin))
		if (find = strchr(st, '\n'))
			*find = '\0';
		else
			eatline();
	return ret_val;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void cleanUp(void)
{
	current = head;	//��ͷ��ʼ�ͷ�
	while (NULL != current)
	{
		head = current->next;//������һ��λ��Ϊ��ʼ
		free(current);//�ͷŷŵ�ǰָ����ڴ�ռ�, ָ�뱾��û�б�ɾ��
		current = head;//ָ���µĿ�ʼ
	}
		
}
void showList(void)
{
	current = head;
	while (NULL != current)
	{
		printf("Movie: %-20s	Rating: %2d\n", current->title, current->rating);
		current = current->next;
	}
	puts("");
}

