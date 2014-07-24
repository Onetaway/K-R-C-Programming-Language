// Ex2.2: 在不使用运算符&&或||的条件下编写一个与
/* for (int i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i) 
{
	s[i] = c
}
*/
// 等价的函数

#include "stdio.h"

enum loop {NO, YES};
enum loop okLoop = YES;

int main(int argc, char const *argv[])
{
	int i = 0;
	while (okLoop == YES) {
		if (i >= lim - 1) {
			okLoop = NO;
		} else if ((c = getchar()) == '\n') {
			okLoop = NO;
		} else if (c == EOF) {
			okLoop = NO;
		} else {
			s[i] = c;
			++i;
		}
	}

	return 0;
}










