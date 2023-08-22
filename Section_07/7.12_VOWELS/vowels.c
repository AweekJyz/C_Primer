// vowels.c -- 使用多重标签
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int a_ct, e_ct, i_ct, o_ct, u_ct;

	a_ct = e_ct = i_ct = o_ct = u_ct = 0;

	printf("Enter some text; enter # to quit. \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case 'a'://多重标签, 原理: 没有break会自动到下一个语句, 形成了多种标签的现象. 
		case 'A': 
			a_ct++;
			break;
		case'e':
		case'E':
			e_ct++;
			break;
		case 'i':
		case 'I': 
			i_ct++;
			break;
		case 'o':
		case 'O': 
			o_ct++;
			break;
		case 'u':
		case 'U': 
			u_ct++;
			break; //可以省略, 但保留可以增加代码的拓展性, 如在case'U'后面再添加其他的case. 
		default:
			break;
		}
	}
	printf("number of vowels: A E I O U\n");
	printf(" %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

	while ((ch = getchar()) != '#')
	{
		ch = toupper(ch);//格式化输入的数据, 将大小写都变成大写, 使得处理数据更加简便. 
		switch (ch)
		{
		case 'A': a_ct++;
			break;
		case 'E': e_ct++;
			break;
		case 'I': i_ct++;
			break;
		case 'O': o_ct++;
			break;
		case 'U': u_ct++;
			break;
		default: break;
		} // switch结束
	} // while循环结束
	printf("number of vowels: A E I O U\n");
	printf(" %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

	return 0;
}