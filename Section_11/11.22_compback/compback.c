// compback.c -- strcmp()∑µªÿ÷µ
#include<stdio.h>
#include<string.h>
//void change(char* a, char* b);

int main(void)
{
	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));
	printf("strcmp(\"A\", \"B\") is ");
	printf("%d\n", strcmp("A", "B"));
	printf("strcmp(\"B\", \"A\") is ");
	printf("%d\n", strcmp("B", "A"));
	printf("strcmp(\"C\", \"A\") is ");
	printf("%d\n", strcmp("C", "A"));
	printf("strcmp(\"Z\", \"a\") is ");
	printf("%d\n", strcmp("Z", "a"));
	printf("strcmp(\"apples\", \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));




	return 0;
}

	/*char order[100];
	int i, j;
	puts("«Î ‰»Î“ª∂Œ◊÷∑˚¥Æ:");
	int num = fgets(order, 100, stdin);
	for (i = 0; i < strlen(order); i++)
	{
		for (j = 0; j < strlen(order); j++)
			if (order[i] > order[j])
				change(order+i, order+j);
	}
	for (i = 0; i < strlen(order); i++)
		putchar(order[i]);
	printf("%d", num);

	return 0;
}
void change(char* a, char* b)
{
	char* temp = a;
	*a = *b;
	*b = *temp;
}*/