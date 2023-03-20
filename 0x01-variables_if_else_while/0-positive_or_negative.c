#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main we will identfy if the number is +ve or -ve
*
* Return 0 is always success
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("%d is a +ve num\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n",n);
	}
	else
	{
		printf("%d is a -ve number\n";
	}
	return (0);

}
