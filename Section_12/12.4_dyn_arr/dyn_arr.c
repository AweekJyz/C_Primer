// dyn_arr.c -- 动态分配数组
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double* ptr;
	int max;
	int number;
	int i = 0;

	puts("What is maximum number of type double entries?");
	if (scanf("%d", &max) != 1)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}
	ptr = (double*)malloc(max * sizeof(double));
	//分配了内存之后便不能修改大小, 分配的时候就定下来了, 如需更改大小只能重新分配再进行数据迁移
	//内存分配失败返回NULL
	if (ptr == NULL)
	{
		puts("Memory allocation failed. Goodbye.");
		exit(EXIT_FAILURE);
	}

	puts("Enter the value (q to quit):");
	while (i < max && (scanf("%lf", &ptr[i]) == 1))
		i++;
	printf("Here are your %d entries:\n", number = i);
	for (i = 0; i < number; i++)	
	{
		printf("%7.2f ", ptr[i]);
		if (i % 7 == 6)
			putchar('\n');
	}
	if (i % 7 != 0)
		putchar('\n');
	puts("Done!");
	
	free(ptr);//指针本身没变, 只是用ptr作为一个参考系, 把绝对地址变相对地址

	//int n = 5;
	//int m = 6;
	//int ar2[n][m]; // n×m的变长数组（VLA）
	//int(*p2)[6]; // C99之前的写法
	//int(*p3)[m]; // 要求支持变长数组
	//p2 = (int(*)[6]) malloc(n * 6 * sizeof(int)); // n×6 数组
	//p3 = (int(*)[m]) malloc(n * m * sizeof(int)); // n×m 数组（要求支持变长数组）
	//ar2[1][2] = p2[1][2] = 12;
	return 0;
}