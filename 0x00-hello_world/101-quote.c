#include<stdio.h>
/**
 * main - entry
 *
 * Description: Prints a custom error
 *
 * Return: Always 1 (Failure)
 */
int main(void)
{
	char txt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(txt, 59, 1, stderr);
	return (1);
}

