// echo.c -- �ظ�����
#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch, sh;

	while ((ch = getchar()) != '#')
		putchar(ch);
	while ((ch = getchar()) != '#')
	{
		ch = _getche();//��������, ��ȡ����ʾ
		putchar(_getche());
	}  
	
	while ((ch = getchar()) != '#')
		sh = _getch();//�޻�������, ֻ��ȡ, ����ʾ
	//printf("%c", sh);

	while ((ch = getchar()) != EOF)//ctrl + z��Сд������
		putchar(ch);

 	return 0;
}