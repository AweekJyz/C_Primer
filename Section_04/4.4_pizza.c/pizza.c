/* pizza.c -- �ڱ�����������ʹ���Ѷ���ĳ��� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159F
#define BEEP '\a'
#define TEE 'T'
#define ESC '\033'
#define OOPS "Now you have done it!"
int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0F * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}