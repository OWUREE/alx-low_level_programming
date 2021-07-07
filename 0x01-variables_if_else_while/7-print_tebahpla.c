#include <stdio.h>
/*
 * a program that prints the lowercase alphabet in reverse
 */
int main (void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)

		putchar(c);

	putchar('\n');

	return 0;
}
