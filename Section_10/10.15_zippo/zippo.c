/* zippo1.c -- zippo的相关信息 */ 
#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
	int(*pz)[2];
	pz = zippo;

	printf(" zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf(" *zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf(" *zippo[0] = %d\n", *zippo[0]);
	printf(" **zippo = %d\n", **zippo);
	printf(" zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo+2) + 1) = %d\n\n", *(*(zippo + 2) + 1));
	/* zippo2.c -- 通过指针获取zippo的信息 */
	printf(" pz = %p, pz + 1 = %p\n", pz, pz + 1);
	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf(" *pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);
	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("  *pz[0] = %d\n", *pz[0]);
	printf("	**pz = %d\n", **pz);
	printf("	  pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));

	const int** pp2;
	int* p1;
	const int n = 13;
	pp2 = &p1; // 允许，但是这导致const限定符失效（根据第1行代码，不能通过**pp2修改它所指向的内容）
	*pp2 = &n; // 有效，两者都声明为const，但是这将导致p1指向n（*pp2已被修改）
	*p1 = 10; //有效，但是这将改变n的值（但是根据第3行代码，不能修改n的值）
	printf("%d", n);//n = 10
	return 0;
}