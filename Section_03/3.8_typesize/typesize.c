/* typesize.c -- 打印类型大小 */
#include <stdio.h>
#include <limits.h>
int main(void)
{
    /* C99为类型大小提供%zd转换说明 */
    printf("Type int has a size of %zd bytes.\n", sizeof(int));//4  32位
    printf("Type char has a size of %zd bytes.\n", sizeof(char));//定义char为一个字节8位
    printf("Type long has a size of %zd bytes.\n", sizeof(long));//4    32位
    printf("Type long long has a size of %zd bytes.\n",//8 64位
        sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",//8 64位
        sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",//8 64位
        sizeof(long double));

    printf("Number of bits in char: %d\n", CHAR_BIT);

    return 0;
}