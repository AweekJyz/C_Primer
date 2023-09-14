// port.c -- ʹ�ó�����������ADT��������
//��list.cһ�����
#include "list.h"
#include <stdio.h>//exit()
#include <stdlib.h>

void showmovies(Item item);
extern void eatline();
extern char* s_gets(char* st, int n);
void port(void)
{
	List movies; //ָ��ڵ��ָ��
	Item temp;

	/* ��ʼ�� */
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}
	/* ��ȡ�û����벢���� */
	puts("Enter first movie title:");
	while (s_gets(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
	{
		puts("Enter your rating <0-10>:");
		scanf("%d", &temp.rating);
		eatline();
		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;//?
		}
		if (ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}
		puts("Enter next movie title (empty line to quit):");
	}
	
	/* ��ʾ */
	if (ListIsEmpty(&movies))
		printf("No data entered.");
	else
	{
		printf("Here is the movie list:");
		Traverse(&movies, showmovies);
	}
	printf("You entered %d movies.\n", ListItemCount(&movies));

	/* ���� */
	EmptyTheList(&movies);
	printf("Bye!\n");
}
void showmovies(Item item)
{
	printf("Movie: %-20s	Rating: %2d\n", item.title, item.rating);
}