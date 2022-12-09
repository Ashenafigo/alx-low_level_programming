#include <stdio.h>

/**
 * main - Entry point
 *
 * print the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
