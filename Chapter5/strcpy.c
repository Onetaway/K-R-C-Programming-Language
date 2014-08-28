#include <stdio.h>
#include <memory.h>
#include <stdlib.h>


// 使用不同的方法实现 strcpy 函数

// 数组版本 copy src to dest.
void strcpyArrayVersion(char *dest, char *src) 
{
	int i = 0;
	while ((dest[i] = src[i]) != '\0') {
		i++;
	}
}

// 指针版本 1 copy src to dest.
void strcpyPointVersion1(char *dest, char *src) {
	while ((*dest = *src) != '\0') {
		dest++;
		src++;
	}
}

// 指针版本 2
void strcpyPointVersion2(char *dest, char *src) {
	while ((*dest++ = *src++) != '\0') {
		;
	}
}

// 指针版本 3
void strcpyPointVersion3(char *dest, char *src) {
	while ((*dest++ = *src++)) {
		;
	}
}

int main(int argc, char const *argv[])
{
	
	char src[] = "Hello";
	char dest[] = {0};

	// 数组版本
	strcpyArrayVersion(dest, src);
	printf("dest: %s\n", dest);

	// 指针版本 1
	strcpyPointVersion1(dest, src);
	printf("dest: %s\n", dest);

	// 指针版本 2
	strcpyPointVersion2(dest, src);
	printf("dest: %s\n", dest);

	// 指针版本 3
	strcpyPointVersion3(dest, src);
	printf("dest: %s\n", dest);


	return 0;
}









