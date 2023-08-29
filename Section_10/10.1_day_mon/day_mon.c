///* day_mon1.c -- 打印每个月的天数 */
//#include <stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int index;
//	for (index = 0; index < MONTHS; index++)
//		printf("Month %2d has %2d days.\n", index + 1, days[index]);
//	return 0;
//}

///* no_data.c -- 为初始化数组 */
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int no_data[SIZE]; /* 未初始化数组 */
//	int i;
//	printf("%2s%14s\n", "i", "no_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, no_data[i]);
//	return 0;
//}

///* some_data.c -- 部分初始化数组 */
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int some_data[SIZE] = { 1492, 1066 };
//	int i;
//	printf("%2s%14s\n", "i", "some_data[i]");
//	for (i = 0; i < SIZE; i++)
//		printf("%2d%14d\n", i, some_data[i]);
//	return 0;
//}

///* day_mon2.c -- 让编译器计算元素个数 */
//#include <stdio.h>
//int main(void)
//{
//	const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 };
//	int index;
//	for (index = 0; index < sizeof days / sizeof days[0]; index++)
//		printf("Month %2d has %d days.\n", index + 1, days[index]);
//	return 0;
//}

/* day_mon3.c -- uses pointer notation */
#include <stdio.h>
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1,
			*(days + index)); //与 days[index]相同
	return 0;
}