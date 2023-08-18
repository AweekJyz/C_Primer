// zeno.c -- 求序列的和
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t_ct;//项计数
	double time, power_of_2;
	int limit;

	printf("Enter the number of terms you want: ");
	scanf("%d", &limit);
	//第一项等价于放在while之前的语句, 只执行一遍
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; /*time += 1.0 / power_of_2,*/ t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("time = %f when terms = %d.\n", time, t_ct);//第三项等价于按逗号表达式顺序放在循环体末尾
	}

	
	return 0;
}