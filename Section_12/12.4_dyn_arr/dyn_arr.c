// dyn_arr.c -- ��̬��������
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
	//�������ڴ�֮��㲻���޸Ĵ�С, �����ʱ��Ͷ�������, ������Ĵ�Сֻ�����·����ٽ�������Ǩ��
	//�ڴ����ʧ�ܷ���NULL
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
	
	free(ptr);//ָ�뱾��û��, ֻ����ptr��Ϊһ���ο�ϵ, �Ѿ��Ե�ַ����Ե�ַ

	//int n = 5;
	//int m = 6;
	//int ar2[n][m]; // n��m�ı䳤���飨VLA��
	//int(*p2)[6]; // C99֮ǰ��д��
	//int(*p3)[m]; // Ҫ��֧�ֱ䳤����
	//p2 = (int(*)[6]) malloc(n * 6 * sizeof(int)); // n��6 ����
	//p3 = (int(*)[m]) malloc(n * m * sizeof(int)); // n��m ���飨Ҫ��֧�ֱ䳤���飩
	//ar2[1][2] = p2[1][2] = 12;
	return 0;
}