/* golf.c -- 高尔夫锦标赛记分卡 */
#include <stdio.h>
int main(void)
{
    int jane, tarzan, cheeta;//许多其他语言都会回避该程序中的三重赋值，但是C完全没问题。

    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan    jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);

    return 0;
}
