// skippart.c -- 使用continue跳过部分循环
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	const float MIN = 0.0f, MAX = 100.0f;

	float score, total = 0.0f, min = MAX, max = MIN;
	int n = 0;

	printf("Enter the first score (q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again: ", score);
			continue;		//超出范围, 重新输入进行段, 不执行循环体后面的内容
		}
		printf("Accepting %0.1f :", score);
		min = score < min ? score : min;//最糟糕的情况考虑, 故min赋予了MAX, 从最大开始, 两两比较出最小
		max = score > max ? score : max;
		total += score;
		n++;
		printf("Enter next score (q to quit):");
	}
	if (n > 0)
	{
		printf("Average of %d scores is %0.1f. \n", n, total / n);
		printf("Low = %0.1f, high = %0.1f\n", min, max);
	}
	else
		printf("No valid scores were entered. \n");

	return 0;
}