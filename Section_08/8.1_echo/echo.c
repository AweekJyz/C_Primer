// echo.c -- 重复输入
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch, sh;

	while ((ch = getchar()) != '#')
		putchar(ch);
	while ((ch = getchar()) != '#')
	{
		ch = _getche();//回显输入, 读取并显示
		putchar(_getche());
	}  
	
	while ((ch = getchar()) != '#')
		sh = _getch();//无回显输入, 只读取, 不显示
	//printf("%c", sh);

	while ((ch = getchar()) != EOF)//ctrl + z大小写都可以
		putchar(ch);

 	return 0;
}