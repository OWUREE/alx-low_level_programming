#include <stdio.h>
/*
 * print alphabets in lowercase except q and e
 */
int main (void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c =='q' || c =='e')
			continue;

		putchar(c);
	}
	putchar('\n');

	return 0;
}

