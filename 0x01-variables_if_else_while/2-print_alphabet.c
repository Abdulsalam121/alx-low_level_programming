#include <stdio.h>

/**
 * main - Prints the alphabets
 * in lower case
 * Return: Always (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);

}
