// swap3.c -- ʹ��ָ������������������
#include <stdio.h>
void interchange3(int* u, int* v);

int main3(void)
{
	int x = 5, y = 10;
	printf("Originally x = %d and y = %d. \n", x, y);
	interchange3(&x, &y);	//�ѵ�ַ���͸�����. ����ַ���൱�ڰ��ϵ׽���ȥ��
	printf("Now x = %d and y = %d. \n", x, y);

	return 0;
}
void interchange3(int* u, int* v)
{
	int temp;
	temp = *u;	//temp��� u ��ָ������ֵ, ��x��ֵ
	*u = *v;
	*v = *u;
}