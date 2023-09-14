// films.c -- ʹ��һ���ṹ����
#include "films.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void arrary(void)
{
	//struct film movies[FMAX];//--1--�������鲻���
	struct film* movies = NULL;//--2--ʹ��ָ�벢malloc��С, ����Ҫ�û�ָ���ṹ����ĳ���
	int i = 0;
	int j, n;
	//space
	printf("Enter the maximum number of movies you'll enter:\n");
	scanf("%d", &n);
	if ((movies = (struct film*)malloc(sizeof(struct film) * n)) == NULL)
	{
		fputs("�����ڴ�ʧ��", stderr);
		exit(1);
	}
	//input
	eatline();
	puts("Enter first movie title:");
	while (i < n && s_gets(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0')
	{
		puts("Enter your rating <0-10>:");
		scanf("%d", &movies[i++].rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop):");
	}
	//if
	if (i == 0)
		printf("No data entered. ");
	else
		printf("Here is the movie list:\n");
	//output
	for (j = 0; j < i; j++)
		printf("Movie: %-20s	Rating: %2d\n", movies[j].title, movies[j].rating);
	//--2--free(movise);
	printf("Bye!\n");

}
