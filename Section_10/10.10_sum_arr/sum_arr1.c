// sum_arr1.c -- 数组元素之和
#include <stdio.h>
#define SIZE 10
int sum(int* ar, int n);
int sump(int* , int* );
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, SIZE);

	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n",
		sizeof marbles);

	answer = sump(marbles, marbles + SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	printf("The size of marbles is %zd bytes.\n",
		sizeof marbles);

	return 0;
}
int sum(int* ar/*ar[]*/, int n)//和原型不一样也可以编译
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);

	return total;
}
int sump(int* start, int* end)
{
	int total = 0;

	for (; start < end; start++)
		total += *start;

	return total;
}