// charAscii.c -- 打印字符和ASCII码
void char_ascii(void)
{
	char ch;
	int i = 1;//

	printf("请输入一段字符, 以#结尾. \n");
	while ((ch = getchar()) != '#')
		//如何把回车当成一个字符输出
	{
		if (ch == '\n')
		{
			printf("\\n-%d\n", '\n');
			i++;
			continue;
		}
		printf("%c-%d	", ch, ch);
		if (i % 8 == 0)
			printf("\n");
		i++;
	}
	while (getchar() != '\n')
		continue;//清空缓存
	printf("\n\n");

	return;
}
void char_ascii_2(void)//数组的做法
{
	char ch[10] = { '\0' };
	int i;

	printf("请输入一段字符, 以#结尾. \n");
	while(getchar() != '#')
	{
		for (i = 0; i < 8; i++)
		{
			ch[i] = getchar();
		}
		for (i = 0; i < 8; i++)
		{
			printf("%c-%d	", ch[i], ch[i]);
		}
		printf("\n");
	}
	while (getchar() != '\n')
		continue;//清空缓存
	printf("\n\n");
	
	return;
}