// s_gets.c -- ����s_gets()����
// ��ȡ�������벢�ÿ��ַ����滻�з������߶�ȡһ�������룬���������ಿ�֡�
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