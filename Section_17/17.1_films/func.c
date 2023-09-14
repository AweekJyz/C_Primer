// func.c -- 公共函数
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
	current = head;	//从头开始释放
	while (NULL != current)
	{
		head = current->next;//定义下一个位置为开始
		free(current);//释放放当前指向的内存空间, 指针本身没有被删除
		current = head;//指向新的开始
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

