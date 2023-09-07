// redocto.c -- ���ļ�ѹ����ԭ����1/3!!
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc, char* argv[])
{
	FILE* in, * out;	//��������ָ��FILE��ָ��
	int ch;
	char name[LEN];	//��������ļ���
	int count = 0;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	//��������
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(3);
	}
	//�������
	strncpy(name, argv[1], LEN - 5); //�����ļ���//ΪʲôҪ��5
	name[LEN - 5] = '\0';
	strcat(name, ".red");			//�ѹ�Ҫ��5
	if ((out = fopen(name, "w")) == NULL)	//��дģʽ���ļ�
	{
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}
	//��������
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);	//��ӡ�����ַ��еĵ�һ���ַ�

	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	
	return 0;
}