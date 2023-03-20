#include <stdio.h>

/**
* main: comprise of main excuted program
*
*  return: is 0
*/

int main(void)
{
	char i;

	for (i = 'a' ; i<= 'z' ; i++)
		putchar(i);
	for(i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
