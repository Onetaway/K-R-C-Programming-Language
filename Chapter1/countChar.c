// 字符计数
#include "stdio.h"

int main(int argc, char const *argv[])
{
	long nc = 0;
	while (getchar() != '\n') {
		++nc;
	}
	printf("一共有 %ld 个字符\n", nc);
	return 0;
}