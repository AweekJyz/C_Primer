// r_drive.c -- ����rand1()����
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>	//�ṩtime()��ANSIԭ��
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
		srand(seed * (unsigned int)time(0));	//��������, ����ʱ��ϵͳ, ʹ�ø������
		for (count = 0; count < 5; count++)
			printf("%d\n", rand());
		printf("Please enter next seed (q to quit):\n");
	}
	printf("Done!\n");
	
	return 0;
}