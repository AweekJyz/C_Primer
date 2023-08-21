// electric.c -- 计算电费
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define RATE1 0.13230								// 首次使用 360 kwh 的费率
#define RATE2 0.15040								// 接着再使用 108 kwh 的费率
#define RATE3 0.30025								// 接着再使用 252 kwh 的费率
#define RATE4 0.34025								// 使用超过 720kwh 的费率
#define BREAK1 360.0								// 费率的第1个分界点
#define BREAK2 468.0								// 费率的第2个分界点
#define BREAK3 720.0								// 费率的第3个分界点
#define BASE1 (RATE1 * BREAK1)						// 使用360kwh的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // 使用468kwh的费用
#define BASE3 (BASE2 + (RATE3 *(BREAK3 - BREAK2)))	// 使用720kwh的费用
int main(void)
{
	double kwh, bill;

	printf("Please enter the kwh used. \n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)			//0~360kwh
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)		//360~468kwh
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)		//468~720kwh
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("The charge for %.lf kwh is $%1.2f. \n", kwh, bill);
	//printf("%c", tolower('Q'));
	/*1*/printf("%d ", isalnum('A'));//输出的是字符的ASCII码?//不是
	/*4*/printf("%d ", isdigit('3'));
	/*64*/printf("%d ", isblank(' '));
	/*0*/printf("%d ", isdigit(4));//首先得是字符, digit判断的是字符的数字
	/*4*/printf("%d ", isalnum('0'));
	/*2*/printf("%d ", isalnum('a'));
	/*2*/printf("%d ", isalnum('a'));//字母数字（字母或数字）
	/*2*/printf("%d ", isalpha('a'));//字母
	/*64*/printf("%d ", isblank(' '));//标准的空白字符（空格、水平制表符或换行符）或任何其他本地化指定为空白的字符
	/*0*/printf("%d ", iscntrl('C'));//控制字符，如Ctrl + B
	/*4*/printf("%d ", isdigit('7'));//数字
	/*2*/printf("%d ", isgraph('a'));//除空格之外的任意可打印字符
	/*2*/printf("%d ", islower('a'));//小写字母
	/*2*/printf("%d ", isprint('a'));//可打印字符
	/*16*/printf("%d ", ispunct(','));//标点符号（除空格或字母数字字符以外的任何可打印字符）
	/*8*/printf("%d ", isspace('	'));//空白字符（空格、换行符、换页符、回车符、垂直制表符、水平制表符或其他本地化定义的字符）
	/*1*/printf("%d ", isupper('A'));//大写字母
	/*128*/printf("%d ", isxdigit('d'));//十六进制数字符
				//表7.2　ctype.h头文件中的字符映射函数
				//函数名 行为
	/*l*/printf("%c ", tolower('L'));//如果参数是大写字符，该函数返回小写字符；否则，返回原始参数
	/*U*/printf("%c ", toupper('u'));//如果参数是小写字符，该函数返回大写字符；否则，返回原始参数
	//0不匹配 1大写字母 2小写字母 4数字 8制表符 16符号 64空格 128十六进制数字 
	//返回的是位掩码
	return 0;
}
