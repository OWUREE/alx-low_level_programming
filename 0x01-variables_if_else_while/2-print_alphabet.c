#include <stdio.h>
/**
 * a program that prints alphabets in lowercase
 * entry function: main
 * program should always return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return 0;
}
