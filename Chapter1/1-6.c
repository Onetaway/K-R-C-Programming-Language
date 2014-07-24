// 验证 getchar() != EOF 的结果是0还是1
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int c;
	c = (getchar() != EOF);
	printf("getchar() != EOF 的值为 %d\n", c);
	return 0;
}