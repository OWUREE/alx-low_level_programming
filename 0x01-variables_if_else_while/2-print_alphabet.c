#include <stdio.h>
/**
 * a program that prints alphabets in lowercase
 *
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return 0;
}
