/* post_pre.c -- ǰ׺�ͺ�׺ */
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;  // ��׺����, ��ʹ��(��ֵ)�����
    pre_b = ++b;   // ǰ׺����, �ȵ�����ʹ��(��ֵ)
    printf("a  a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

#define ADJUST 7.31
    const double SCALE = 0.333;    // const����
    double shoe, foot;
    shoe = 2;

    while (++shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f inches\n", shoe, foot);
    }


    return 0;
}