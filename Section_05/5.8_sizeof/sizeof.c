// sizeof.c -- ʹ��sizeof�����
// ʹ��C99������%zdת��˵�� -- �����������֧��%zd���뽫��ĳ�%u��%lu
#include <stdio.h>
int main(void)
{
    typedef double real;
    int n = 0;
    size_t intsize;
    double a = 45.0;
    real b = 4556.12;

    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
        n, sizeof n, intsize);
    printf("%f, %f", a, b);

    return 0;
}