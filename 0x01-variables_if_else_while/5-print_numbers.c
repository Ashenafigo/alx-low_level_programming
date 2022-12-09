#include <stdio.h>
/**
 * main - Entry point
 *
 * print all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int count = 0;

	while (count <= 9)
	{
		printf("%d", count);
		count = count + 1;
	}
	printf("\n");
	return (0);
}
