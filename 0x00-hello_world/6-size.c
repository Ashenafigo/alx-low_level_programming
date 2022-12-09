/**
 * main - Entry point
 *
 * printf: prints the size of a given data type
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main()
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of a long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return 0;
}