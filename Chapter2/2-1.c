// Ex:2.1 编写一个程序以确定分别由signed及unsigned限定的char、short、int与long类型变量的取值范围。
// 采用打印标准头文件中的相应值以及直接计算两种方式实现

#include "stdio.h"
#include "limits.h"

void printStandard();
void compute();

void printStandard()
{
	// Signed types
	printf("signed char min = %d\n", SCHAR_MIN);
	printf("signed char max = %d\n", SCHAR_MAX);
	printf("signed short min = %d\n", SHRT_MIN);
	printf("signed short max = %d\n", SHRT_MAX);
	printf("signed int min = %d\n", INT_MIN);
	printf("signed int max = %d\n", INT_MAX);
	printf("signed long min = %ld\n", LONG_MIN);
	printf("signed long max = %ld\n", LONG_MAX);
	printf("signed long long min = %lld\n", LONG_LONG_MIN);
	printf("signed long long max = %lld\n", LONG_LONG_MAX);

	// Unsigned types
	printf("unsigned char max = %u\n", UCHAR_MAX);
	printf("unsigned short max = %u\n", USHRT_MAX);
	printf("unsigned int max = %u\n", UINT_MAX);
	printf("unsigned long max = %lu\n", ULONG_MAX);
}

void compute()
{
	// Signed types
	printf("signed char min = %d\n", -(char)(((unsigned char)~0) >> 1));
	printf("signed char max = %d\n", (char)(((unsigned char)~0) >> 1));
	printf("signed short min = %d\n", -(short)(((unsigned short)~0) >> 1));
	printf("signed short max = %d\n", (short)(((unsigned short)~0) >> 1));
	printf("signed int min = %d\n", -(int)(((unsigned int)~0) >> 1));
	printf("signed int max = %d\n", (int)(((unsigned int)~0) >> 1));
	printf("signed long min = %ld\n", -(long)(((unsigned long)~0) >> 1));
	printf("signed long max = %ld\n", (long)(((unsigned long)~0) >> 1));
	printf("signed long long min = %lld\n", -(long long)(((unsigned long long)~0) >> 1));
	printf("signed long long max = %lld\n", (long long)(((unsigned long long)~0) >> 1));

	// Unsigned types
	printf("unsigned char max = %u\n", (unsigned char)~0);
	printf("unsigned short max = %u\n", (unsigned short)~0);
	printf("unsigned int max = %u\n", (unsigned int)~0);
	printf("unsigned long max = %lu\n", (unsigned long)~0);
}

int main(int argc, char const *argv[])
{
	printf("直接打印宏定义的方式:\n");
	printStandard();

	printf("直接计算的方式:\n");
	compute();

	return 0;
}
















