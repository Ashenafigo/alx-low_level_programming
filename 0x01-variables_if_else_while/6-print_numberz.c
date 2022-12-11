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
	int ch;
	
	ch = 0;
	while (ch <= 9)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
