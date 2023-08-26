// repoChar.c -- 报告读取字符数量(包括空格)
void repo_char(void)
{
	char ch;
	int a = 0, b = 0, c = 0;//分别用来统计空格, 换行和其他字符
	//的数量

	printf("请输入一段字符, 以#结尾. \n");
	while ((ch = getchar()) != '#')
//回车都会将缓冲区内容推出, 被迫执行先(在判断条件之前)一次循环内容
	{
		if (ch == ' ')//赋值和判断!!!!!
			a++;
		else if (ch == '\n')
			b++;
		else
			c++;
	}
	while (getchar() != '\n')
		continue;//清空缓存
	printf("空格有%d个, 换行符有%d个, 其他字符有%d个. \n",
		a, b, c);

	return;
}