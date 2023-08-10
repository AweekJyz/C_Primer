/* typesize.c -- ��ӡ���ʹ�С */
#include <stdio.h>
#include <limits.h>
int main(void)
{
    /* C99Ϊ���ʹ�С�ṩ%zdת��˵�� */
    printf("Type int has a size of %zd bytes.\n", sizeof(int));//4  32λ
    printf("Type char has a size of %zd bytes.\n", sizeof(char));//����charΪһ���ֽ�8λ
    printf("Type long has a size of %zd bytes.\n", sizeof(long));//4    32λ
    printf("Type long long has a size of %zd bytes.\n",//8 64λ
        sizeof(long long));
    printf("Type double has a size of %zd bytes.\n",//8 64λ
        sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",//8 64λ
        sizeof(long double));

    printf("Number of bits in char: %d\n", CHAR_BIT);

    return 0;
}