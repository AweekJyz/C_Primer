// talkback.c -- 演示与用户交互
#define _CRT_SECURE_NO_WARNINGS //必须放在第一行, 为什么?				只要保证在stdio.h之前就行
//将该指令放在文件的开头是为了确保它在任何标准库函数被调用之前生效

#include <string.h>		//提供strlen()函数的原型
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define DENSITY 62.4F	//人体密度

int main()
{
	float weight, volume;
	int size, letters;
	char name[40] = {'\0'};		//容纳40个字符的数组		没有\0会有警告c6054

	printf("Hi! What's your first name\?\n"); //可以转义也可以不转义
	scanf("%s", name);	//字符串名就是地址
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof(name);	//sizeof是字节位单位的长度
	letters = strlen(name);	//字符串长度
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %80.2f cubic feet. \n", name, volume);//在这里，2 表示最小宽度为 2 个字符（包括小数点和小数部分）用来对齐
	printf("Also, your first name has %d letters, \n", letters);
	printf("and we have %d bytes to store it. \n", size);

	return 0;
}