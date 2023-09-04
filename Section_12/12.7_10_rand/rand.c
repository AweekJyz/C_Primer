// rand1.c -- 生成随机数
//使用ANSI C可移植算法
static unsigned long next = 1;	//种子

unsigned int rand(void)
{
	//伪随机数
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void srand(unsigned int seed)
{
	next = seed;
}