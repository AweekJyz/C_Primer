// summing.c --�����û�������������
#define _CRT_SECURE_NO_WARNINGS
#define WAHT 7574 //��û��ֵ, ֻ�ǵ������滻, �ʲ������ڼ��������汻����
#include <stdio.h>
int main(void)
{
	printf("%d", WAHT);
	long num = 0, sum = 0L, a = 0l;
	// ��Ϊ�������� 0 �ڲ�ͬ����֮����и�ֵʱͨ�����Զ���������ת����������ʹ�� 0��0l ���� 0L�������Գɹ�����Щֵ��ֵ�� long ���͵ı�����
	int status;

	printf("Please enter an integer to be summed (q to quit) : ");
	/*status = scanf("%ld", &num);*/
	//while (status == 1)
	//{
	//	sum = sum + num;
	//	printf("Please enter next integer (q to quit) : ");
	//	status = scanf("%ld", &num);
	//}
	while (scanf("%ld", &num) == 1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit) : ");
	}
	printf("Those integer sum to %ld. \n", sum);

	return 0;
}