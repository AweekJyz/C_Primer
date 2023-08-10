// defines.c -- 使用limit.h和float头文件中定义的明示常量
#include <stdio.h>
#include <limits.h>    // 整型限制
#include <float.h>     // 浮点型限制
int main(void)
{
	printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest double: %e\n", DBL_MIN);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("%d\n", FLT_MAX_10_EXP);
    printf("%d\n", FLT_MAX_10_EXP);
    printf("%d\n", FLT_MAX_10_EXP);
    printf("%d\n", FLT_MAX_10_EXP);
    printf("%d\n", FLT_MIN_10_EXP);
    printf("%d\n", FLT_MANT_DIG);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);


	return 0;
}