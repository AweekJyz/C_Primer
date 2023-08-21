// cypher.c -- 更改输入, 空格不变
#include <stdio.h>
#define SPACE ' ' //SPACE表示单引号-空格-单引号
#include <ctype.h>
int main(void)
{
	char ch;

	//ch = getchar();			//读取一个字符
	while ((ch = getchar()) != '\n')		//当一行未结束时
	{
		if (/*ch == SPACE*/isalpha(ch))//留下空格		//留下除数字外其他字符
			putchar(ch + 1);	
		else
			putchar(ch);	//该字符原样输出
		///ch = getchar();
	}
	putchar(ch);			//打印换行符

	return 0;
}