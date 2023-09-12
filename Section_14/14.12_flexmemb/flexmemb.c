// flexmemb.c -- ���������Ա(c99��������)
#include <stdio.h>
#include <stdlib.h>

struct flex
{
	size_t count;
	double average;
	double scores[];		//���������Ա
};
void showFlex(const struct flex* p);

int main(void)
{
	struct flex* pf1, * pf2;
	int n = 5;
	int i;
	int tot = 0;

	//Ϊ�ṹ���������ռ�
	if ((pf1 = malloc(sizeof(struct flex) + n * sizeof(double))) == NULL)
	{
		fprintf(stderr, "�ڴ����ʧ��.\n");
		exit(EXIT_FAILURE);
	}
	//pf1 = malloc(sizeof(struct flex) + n * sizeof(double));
	//�ṹ����ͨ��������ͬһ�����ƿռ�, ����Ҫ��struct����
	pf1->count = n;
	for (i = 0; i < n; i++)
	{
		pf1->scores[i] = 20.0 - i;
		tot += pf1->scores[i];
	}
	pf1->average = tot / n;
	showFlex(pf1);
	free(pf1);

	n = 9;
	tot = 0;
	pf2 = malloc(sizeof(struct flex) + n * sizeof(double));
	pf2->count = n;//����Ϊ0����Ϊnull��һ��if����жϼ���
	for (i = 0; i < n; i++)
	{
		pf2->scores[i] = 20.0 - i / 2.0;
		tot += pf2->scores[i];
	}
	pf2->average = tot / n;
	showFlex(pf2);
	free(pf2);

	return 0;
}
void showFlex(const struct flex* p)
{
	int i;
	printf("Scores : ");
	for (i = 0; i < p->count; i++)
		printf("%g ", p->scores[i]);
	printf("\nAverage: %g\n", p->average);
}