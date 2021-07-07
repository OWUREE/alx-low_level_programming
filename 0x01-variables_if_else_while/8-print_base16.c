#include <stdio.h>
/*
 * to print all the numbers of base 16 in lowercase
 */
int main (void)
{
	char letter;
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return 0;
}
