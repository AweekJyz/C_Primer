// port.c -- 使用抽象数据类型ADT风格的链表
//与list.c一起编译
#include "list.h"
#include <stdio.h>//exit()
#include <stdlib.h>

void showmovies(Item item);
extern void eatline();
extern char* s_gets(char* st, int n);
void port(void)
{
	List movies; //指向节点的指针
	Item temp;

	/* 初始化 */
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}
	/* 获取用户输入并储存 */
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
	
	/* 显示 */
	if (ListIsEmpty(&movies))
		printf("No data entered.");
	else
	{
		printf("Here is the movie list:");
		Traverse(&movies, showmovies);
	}
	printf("You entered %d movies.\n", ListItemCount(&movies));

	/* 清理 */
	EmptyTheList(&movies);
	printf("Bye!\n");
}
void showmovies(Item item)
{
	printf("Movie: %-20s	Rating: %2d\n", item.title, item.rating);
}