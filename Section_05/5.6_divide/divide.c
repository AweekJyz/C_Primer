/* divide.c -- 演示除法 */
#include <stdio.h>
int main(void)
{
    printf("integer division:  5/4   is %d \n", 5 / 4);//直接丢弃, 不会四舍五入
    printf("integer division:  6/3   is %d \n", 6 / 3);
    printf("integer division:  7/4   is %d \n", 7 / 4);
    printf("floating division: 7./4. is %1.2f \n", 7. / 4.);
    printf("mixed division:    7./4  is %1.2f \n", 7. / 4);//混合类型可以兼容, 但尽量避免

    return 0;
}