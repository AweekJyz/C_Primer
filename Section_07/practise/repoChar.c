// repoChar.c -- �����ȡ�ַ�����(�����ո�)
void repo_char(void)
{
	char ch;
	int a = 0, b = 0, c = 0;//�ֱ�����ͳ�ƿո�, ���к������ַ�
	//������

	printf("������һ���ַ�, ��#��β. \n");
	while ((ch = getchar()) != '#')
//�س����Ὣ�����������Ƴ�, ����ִ����(���ж�����֮ǰ)һ��ѭ������
	{
		if (ch == ' ')//��ֵ���ж�!!!!!
			a++;
		else if (ch == '\n')
			b++;
		else
			c++;
	}
	while (getchar() != '\n')
		continue;//��ջ���
	printf("�ո���%d��, ���з���%d��, �����ַ���%d��. \n",
		a, b, c);

	return;
}