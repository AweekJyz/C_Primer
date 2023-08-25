// binary.c -- 以二进制形式打印整数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int to_binary(unsigned long n);

int main(void)
{
	unsigned long number;

	printf("Enter an integer (q to quit): \n");
	while (scanf("%lu", &number) == 1)
	{
		printf("Binary equivalent: ");
		to_binary(number);
		putchar('\n');
		printf("Enter am integer (q to quit): \n");
	}
	printf("Done!\n");

	return 0;
}
int to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');

	return;
}