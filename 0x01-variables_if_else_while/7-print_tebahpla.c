#include <stdio.h>
/**
 * main - Entry point
 *
 * print the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	printf("\n");
	return (0);
}
