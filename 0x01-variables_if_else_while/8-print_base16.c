#include <stdio.h>

/**
* main: main executed function
*
* return: is always 0
*/

int main(void)
{
	int j;
	char k;
	
	for (j = 0 ; j < 10 ; j++)
		putchar(j + '0');
	for (k = 'a' ; j <= 'f' ; j++)
		putchar(k);
	putchar('\n');
	return (0);
