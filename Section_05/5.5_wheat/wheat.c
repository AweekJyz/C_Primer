//wheat.c -- 指数增长
#include <stdio.h>
#define SQUARES 64 //棋盘中的方格数
int main(void)
{
	const double CROP = 2E16; //世界小麦年产谷粒数
	double current = 0.0, total = 0.0;
	int count = 1;

	printf("square     grains       total     ""fraction of \n");
	printf("           added        grains    ""world total\n");
	total = current = 1.0;        /* 从1颗谷粒开始   */
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);

	while (count < SQUARES)
	{
		count++;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}
	printf("That's all.\n");

	return 0;
}
