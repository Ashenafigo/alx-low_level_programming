#include <stdio.h>
/**
 * main - Entry point
 *
 * print all letter except q and e
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'q'; ch++)
	{
		if (ch == 101)
			continue;
		putchar(ch);
	}
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
