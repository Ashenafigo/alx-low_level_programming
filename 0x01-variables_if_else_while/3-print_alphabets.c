#include <stdio.h>
/**
 * main - Entry point
 *
 * print the alphabet both upper and lowercase
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	printf("\n");
	return (0);
}
