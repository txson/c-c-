#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void printf_binary(int var)
{
	char b[100];
	itoa(var,b,2);
	printf("%s",b);
}

void compare(int a, int b)
{
	int c = a^b;
	int num = 0;
	while(c) {
		if (c%2)
			num++;
		c = c << 1;
	}
	printf("difference :%d\n", num);
}

int main()
{
	int a = 0x16;
	int b = 0xf5;
	
	printf_binary(a);
	printf_binary(b);
	compare(a, b);	
	return 0;
}

