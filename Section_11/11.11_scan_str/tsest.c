void puts1(const char* string)
{
	while (*string/* != '\0'*/)//һ������˼
		putchar(*string++);//��ָ�����(ƽ��)
}

void puts2(const char string[])
{
	int i = 0;
	while (string[i]/* != '\0'*/)
		putchar(string[i++]);
}
int puts3(const char* string)
{
	int count = 0;
	while (*string/* != '\0'*/)//һ������˼
	{
		putchar(*string++);//��ָ�����(ƽ��)
		count++;//ͳ���ַ���������
	}
	putchar('\n');//��ͳ�ƻ��з�

	return count;
}