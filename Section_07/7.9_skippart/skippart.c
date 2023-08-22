// skippart.c -- ʹ��continue��������ѭ��
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
			continue;		//������Χ, ����������ж�, ��ִ��ѭ������������
		}
		printf("Accepting %0.1f :", score);
		min = score < min ? score : min;//�������������, ��min������MAX, �����ʼ, �����Ƚϳ���С
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