/* praisel.c -- 使用不同类型字符串*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //提供strlen()函数的原型
#define PRAISE "You are an extraordinary being." //#定义字符串常量. #编译器会在末尾加上空字符. #用大写表示符号常量是C语言一贯的传统
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);	//一般而言, 根据% s转换说明, scanf()只会读取字符串中的第一个单词, 而不是一整句. 
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %zd letters occupies %zd memory cells. \n", strlen(name), sizeof name/*不是函数, 可以不用括号*/);
	//何时使用圆括号取决于运算对象是类型还是特定量, 还是建议所有情况下都使用圆括号
	printf("The phrase of praise has %zd letters and occupies %zd memory cells. \n", strlen(PRAISE), sizeof PRAISE);
	//sizeof 房屋面积	strlen()使用面积		早期这两个返回值都是unsigned或者unsigned long所以用%u或者%lu也可以
	return 0;
}