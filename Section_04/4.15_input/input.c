// input.c -- ��ʱʹ��&
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int age;             // ����
    float assets;        // ����
    char pet[30];        // �ַ����飬���ڴ洢�ַ���

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);   // ����Ҫʹ��&
    scanf("%s", pet);                // �ַ����鲻ʹ��&
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}