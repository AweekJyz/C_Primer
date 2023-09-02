// ptr_ops.c -- ָ�����
#include<stdio.h>
int sum(int ar[], int n);
int main(void)
{
	int urn[5] = { 100,200,300,400,500 };
	int* ptr1, * ptr2, * ptr3;

	ptr1 = urn;
	ptr2 = &urn[2];
	//����ָ��, �Ի��ָ��ĵ�ַ
	printf ("pointer value, dereferenced pointer, pointer address:\n") ;
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
	//ptr1 = 0000007320EFF9C8, *ptr1 = 100, &ptr1 = 0000007320EFF9F8 ��ַΪʲô��16λ��
	//ָ���ַ�������̫Զ, 0x20, 0x30

	//ָ��ӷ�
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d\n", ptr1 + 4, *(ptr1 + 4));
	ptr1++;
	printf("\nvalue after ptr1++: \n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);//&ptr1����

	ptr2--;
	printf("\nvalue after --ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	//�ָ���ʼֵ
	--ptr1;
	++ptr2;
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	//һ��ָ���ȥ��һ��ָ��
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
	//һ��ָ���ȥһ������
	printf("\nsubstracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

	int i, total;
	total = sum(urn, 2);
	for (i = 0; i < 5; i++)
	{
		printf("%d	", urn[i]);
	}
	printf("\n%d ", total);

	return 0;
}

int sum(int ar[], int n) // ����Ĵ���
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
		total += ar[i]++; // ���������ÿ��Ԫ�ص�ֵ
	return total;
}