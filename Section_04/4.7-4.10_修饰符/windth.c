/* width.c -- �ֶο�� */
#include <stdio.h>
#define PAGES 959
#define BLURB "Authentic imitation!"
#define PAGES 336
#define WORDS 65618
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%.2d*\n", PAGES);//����������, �����ٲ�
    printf("*%010.5d*\n", PAGES);//ȷ������0��Ӱ��
    printf("*%10d*\n", PAGES);
    printf("*%010d*\n", PAGES);
    printf("*%-010d*\n\n", PAGES);//���ź���0

    // floats.c -- һЩ���������η������
    const double RENT = 3852.99;  // const����

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    printf("*%010.3g*\n\n", RENT);//.x�����Чλ��

    /* flags.c -- ��ʾһЩ��ʽ��� */
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**%+d**\n", 42, 42, -42, 42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n\n", 6, 6, 6, 6);

    /* stringf.c -- �ַ�����ʽ */
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%024.5s]\n", BLURB);
    printf("[%-24.5s]\n\n", BLURB);

    /* intconv.c -- һЩ��ƥ�������ת�� */
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short and unsigned short:  %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %c\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %c\n\n", WORDS, WORDS, WORDS);

    return 0;
}