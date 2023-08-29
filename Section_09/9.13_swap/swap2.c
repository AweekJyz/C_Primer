/* swap2.c -- 查找swap1.c的问题 */
#include <stdio.h>
void interchange2(int u, int v);


int main2(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d.\n", x, y);
	interchange2(x, y);
	printf("Now x = %d and y = %d.\n\n", x, y);
	return 0;
}
void interchange2(int u, int v)
{
	int temp;
	printf("Originally u = %d and v = %d.\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("Now u = %d and v = %d.\n", u, v);
}