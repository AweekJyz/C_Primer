// charAscii.c -- ��ӡ�ַ���ASCII��
void char_ascii(void)
{
	char ch;
	int i = 1;//

	printf("������һ���ַ�, ��#��β. \n");
	while ((ch = getchar()) != '#')
		//��ΰѻس�����һ���ַ����
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
		continue;//��ջ���
	printf("\n\n");

	return;
}
void char_ascii_2(void)//���������
{
	char ch[10] = { '\0' };
	int i;

	printf("������һ���ַ�, ��#��β. \n");
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
		continue;//��ջ���
	printf("\n\n");
	
	return;
}