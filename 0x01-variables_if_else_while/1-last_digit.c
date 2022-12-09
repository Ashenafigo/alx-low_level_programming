#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * print last digit of the number stored in the variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %d ", n);
	int last = num % 10;
	if (last > 5)
	{ 
		printf("and is greater than 5");
	}
	if else (last == 0)
	{
		printf("and is 0");
	}
	if else (last < 6 && last != 0)
	{
		printf("and is less than 6 and not 0\n");
	return (0);
}
