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
	int first, mid, last;

	for (first = 48; first < 56; first++)
		for (mid = (first + 1); mid < 57; mid++)
			for (last = (mid + 1); last <= 57; last++)
			{
				putchar(first);
				putchar(mid);
				putchar(last);
				if (first + mid + last != 168)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}

