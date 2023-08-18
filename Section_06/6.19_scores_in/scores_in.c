// scores_in.c -- 使用循环处理数组
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10
#define PAR 72
#include<stdio.h>
int main(void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d golf scores: \n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);
	printf("The scores read in are as follows: \n");
	for (index = 0; index < SIZE; index++)
		printf("%5d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	average = (float)sum / SIZE;
	printf("Sum of scores = %d, average = %.2f", sum, average);
	printf("That's a handicap of %.0f. \n\n", average - PAR);

	printf("Enter %d golf scores: \n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &score[index]);
		printf("%5d", score[index]);
		sum += score[index];
	}
	average = (float)sum / SIZE;
	printf("\nSum of scores = %d, average = %.2f", sum, average);
	printf("That's a handicap of %.0f. \n\n", average - PAR);

	return 0;
}