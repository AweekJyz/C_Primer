// divisors -- 使用嵌套if语句显示一个数的约数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num, div;//待测数与可能的约数
	bool isPrime;//素数标记.

	printf("Please enter an integer for analusis; ");
	printf("Enter q to quit. \n");
	while (scanf("%lu", &num))
	{
		for (div = 1, isPrime = true; (div * div) <= num; div++)//会把1认为是素数
		{
			if (num % div == 0 && div != 1) //数字太大会出现异常, 除数为0
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu. \n", num, div, num / div);
				else
					printf("%lu is divisible by %lu. \n", num, div);
				isPrime = false;	//不是素数
			}
		}
		if (isPrime)
			printf("%lu is prime. \n", num);
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quit. \n");
	}	
	printf("Bye. \n");

	return 0;
}