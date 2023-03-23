#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Assigns random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a, mi;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (mi = 'a'; mi <= 'f'; mi++)
		putchar(mi);
	putchar('\n');
	return (0);
}
