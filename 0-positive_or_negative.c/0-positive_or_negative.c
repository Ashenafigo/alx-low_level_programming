#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*This code print whether the number stored in the variable n is positive or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0){
		printf("%d is greater than 0\n", n);
	}
	else if(n == 0){
		printf("%d is zero\n", n);
	}
	else{
		printf("%d is negative\n", n);
	}
	return (0);
}
