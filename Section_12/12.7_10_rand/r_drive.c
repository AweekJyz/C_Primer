// r_drive.c -- 测试rand1()函数
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>	//提供time()的ANSI原型
#include <stdio.h>
extern unsigned int rand(void);
void srand(unsigned int seed);

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while (scanf("%u", &seed) == 1)
	{
		srand(seed * (unsigned int)time(0));	//重置种子, 加入时钟系统, 使得更加随机
		for (count = 0; count < 5; count++)
			printf("%d\n", rand());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done!\n");
	
	return 0;
}