/* swap1.c -- ��1���汾�Ľ������� */
#include <stdio.h>
void interchange1(int u, int v); /* �������� */
int main2(void);
int main3(void);

int main(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange1(x, y);
	printf("Now x = %d and y = %d.\n\n", x, y);

	main2();
	main3();


	return 0;
}
void interchange1(int u, int v) /* ���庯�� */
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
