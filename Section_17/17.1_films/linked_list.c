#include "films.h"
#include <stdio.h>
#include <stdlib.h> //malloc()
#include <string.h> //strcpy()

struct films* head = NULL;
struct films* prev = NULL, * current;//��һ���͵�ǰ

void linked_list(void)
{
	
	char input[TSIZE];

	puts("Enter first movie title:");
	while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		if ((current = (struct films*)malloc(sizeof(struct films))) == NULL)
		{
			fputs("�����ڴ�ʧ��", stderr);
			exit(1);
		}
		if (head == NULL)	//˵���ǵ�һ���ṹ
			head = current;
		else //�����ṹ
			prev->next = current;
		current->next = NULL;
		strcpy(current->title, input);
		puts("Enter your rating <0-10>:");
		scanf("%d", &current->rating);
		eatline();
		puts("Enter next movie title (empty line to quit):");
		prev = current;	//���α�ǰ��
	}
	if (NULL == head)
		puts("No data entered.");
	else
		puts("Here is the movie list: ");
	showList();
	cleanUp();
}