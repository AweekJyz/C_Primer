void puts1(const char* string)
{
	while (*string/* != '\0'*/)//一样的意思
		putchar(*string++);//是指针递增(平移)
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
	while (*string/* != '\0'*/)//一样的意思
	{
		putchar(*string++);//是指针递增(平移)
		count++;//统计字符数并返回
	}
	putchar('\n');//不统计换行符

	return count;
}