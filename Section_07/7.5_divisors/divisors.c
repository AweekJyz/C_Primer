// divisors -- ʹ��Ƕ��if�����ʾһ������Լ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned long num, div;//����������ܵ�Լ��
	bool isPrime;//�������.

	printf("Please enter an integer for analusis; ");
	printf("Enter q to quit. \n");
	while (scanf("%lu", &num))
	{
		for (div = 1, isPrime = true; (div * div) <= num; div++)//���1��Ϊ������
		{
			if (num % div == 0 && div != 1) //����̫�������쳣, ����Ϊ0
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu. \n", num, div, num / div);
				else
					printf("%lu is divisible by %lu. \n", num, div);
				isPrime = false;	//��������
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