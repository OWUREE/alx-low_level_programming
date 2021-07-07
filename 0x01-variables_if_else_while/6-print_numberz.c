#include <stdio.h>
/*
 * to print all single digit numbers of base 10 using the putchar function
 */
int main (void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');
	putchar('\n');

	return 0;
}
