// showchar.c -- �нϴ� i/o ����ĳ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void display(char cr, int lines, int width);
int main(void)
{
	int ch, rows, cols;

	printf("Enter a character and two integers:\n");
	while ((ch = getchar()) != '\n')	//�ÿ�ʲô������ѭ��, ��֮���ǽ�ѭ��, ��ѭ������������Ϊ��, �������ѭ��. 
	{
		if(scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quit. \n");
	}
	printf("Bye. \n");

	return 0;
}
void display(char cr, int lines, int width)
{
	int row, col;
	
	for (row = 1; row <= lines; row++)
	{
		for (col = 0; col <= width; col++)
			putchar(cr);
		putchar('\n');
	}
}