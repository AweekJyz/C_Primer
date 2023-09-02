// s_gets.c -- 定义s_gets()函数
// 读取整行输入并用空字符代替换行符，或者读取一部分输入，并丢弃其余部分。
char* s_gets(char* st, int n)
{
	char* ret_val;
	int i;

	ret_val = fgets(st, n, stdin);
	if (ret_val)//ret_val != NULL;
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if ('\n' == st[i])
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret_val;
}