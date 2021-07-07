#include <stdio.h>
/*
 * a program to print all possible combinations of single-digit numbers
 * program entry function = main
 * program should always return 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return 0;
}
