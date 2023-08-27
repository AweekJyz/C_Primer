// eiCount.c -- 计算ei的个数
#include "practise.h"

void ei_count(void)
{
	char input[1000] = { '\0' };
	int count = 0, i;
	char ch;

	printf("请输入字符串，以#结束：\n");
	//用字符判断结束的用scanf不好做到
	for (i = 0; (ch = getchar()) != '#'; i++)
		input[i] = ch;
	//没有拿到'#"就不会出循环
	input[i] = '\0';
	//'#'之前全部输入到字符串里面
	for (i = 0; i < strlen(input); i++) 
		if (input[i] == 'e' && input[i + 1] == 'i') 
			count++;
	printf("字符串中 \"ei\" 出现的次数为：%d\n", count);


	//char ch;
	//int i = 0;//用来求和和计数的变量要初始化. 

	//printf("请输入一段字符, 以'#'结尾. \n");
	//ch = getchar();
	//while (ch != '#')
	//{
	//	if (ch == 'e' && ((ch = getchar()) == 'i'))
	//		//得从左往右读取
	//		i++;
	//	else
	//	{//e多次连续出现就会出错, 经过if和else两次的getchar
	//		//跳过了一个字符的判断
	//		ch = getchar();
	//		continue;
	//	}
	//}
	//printf("ei出现了%d次. \n", i);

	return;
}