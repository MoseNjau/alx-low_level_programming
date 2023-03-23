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
	int mi;

	for (mi = 48; mi < 58; mi++)
	{
		putchar(mi);
		if (mi < 57)
			putchar(',');
		if (mi < 57)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
