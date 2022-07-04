#include <stdio.h>
int main(void)
{
	char ch = 'a', CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar (CH);
	putchar ('\n');
	return (0);
}
