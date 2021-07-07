#include <stdio.h>
/*
 * entry function is main
 * program should always return 0
 * a program that prints the lowercase alphabet in reverse
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)

		putchar(c);

	putchar('\n');

	return 0;
}
