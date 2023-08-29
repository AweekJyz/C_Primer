/* swap1.c -- 第1个版本的交换函数 */
#include <stdio.h>
void interchange1(int u, int v); /* 声明函数 */
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
void interchange1(int u, int v) /* 定义函数 */
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
