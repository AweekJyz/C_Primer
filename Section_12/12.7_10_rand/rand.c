// rand1.c -- ���������
//ʹ��ANSI C����ֲ�㷨
static unsigned long next = 1;	//����

unsigned int rand(void)
{
	//α�����
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void srand(unsigned int seed)
{
	next = seed;
}