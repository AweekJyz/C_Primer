/* width.c -- 字段宽度 */
#include <stdio.h>
#define PAGES 959
#define BLURB "Authentic imitation!"
#define PAGES 336
#define WORDS 65618
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%.2d*\n", PAGES);//不会吞数据, 多退少补
    printf("*%010.5d*\n", PAGES);//确定精度0不影响
    printf("*%10d*\n", PAGES);
    printf("*%010d*\n", PAGES);
    printf("*%-010d*\n\n", PAGES);//负号忽略0

    // floats.c -- 一些浮点型修饰符的组合
    const double RENT = 3852.99;  // const变量

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    printf("*%010.3g*\n\n", RENT);//.x最大有效位数

    /* flags.c -- 演示一些格式标记 */
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**%+d**\n", 42, 42, -42, 42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n\n", 6, 6, 6, 6);

    /* stringf.c -- 字符串格式 */
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%024.5s]\n", BLURB);
    printf("[%-24.5s]\n\n", BLURB);

    /* intconv.c -- 一些不匹配的整型转换 */
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short:  %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n\n", WORDS, WORDS, WORDS);

    return 0;
}