// min_sec.c -- ���������ɷֺ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PRE_MIN 60		//1����60��
int main(void)
{
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PRE_MIN;	//�ضϷ�����
		left = sec % SEC_PRE_MIN;	//ʣ�µ�����
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}