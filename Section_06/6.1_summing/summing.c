// summing.c --根据用户键入的整数求和
#define _CRT_SECURE_NO_WARNINGS
#define WAHT 7574 //宏没有值, 只是单纯的替换, 故不可以在监视器里面被发现
#include <stdio.h>
int main(void)
{
	printf("%d", WAHT);
	long num = 0, sum = 0L, a = 0l;
	// 因为整数常量 0 在不同类型之间进行赋值时通常会自动进行类型转换。无论您使用 0、0l 还是 0L，都可以成功将这些值赋值给 long 类型的变量。
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