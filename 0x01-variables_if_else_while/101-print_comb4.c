#include <stdio.h>

/**
* main: main executed function
*
* return: is always 0
*/

int main(void)
{
	int k;
	char n;

	for (k = 0 ; k < 10 ; k++)
		putchar(k + '0');
	for(n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0)
}
