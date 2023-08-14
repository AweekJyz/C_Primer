/* post_pre.c -- 前缀和后缀 */
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++;  // 后缀递增, 先使用(赋值)后递增
    pre_b = ++b;   // 前缀递增, 先递增后使用(赋值)
    printf("a  a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

#define ADJUST 7.31
    const double SCALE = 0.333;    // const变量
    double shoe, foot;
    shoe = 2;

    while (++shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %20.2f inches\n", shoe, foot);
    }


    return 0;
}