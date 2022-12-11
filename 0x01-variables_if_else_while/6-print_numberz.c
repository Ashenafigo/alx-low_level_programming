#include <stdio.h>
/**
 * main - Entry point
 *
 * print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int ch = 0; ch <= 9; ch++)
	{
		putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
