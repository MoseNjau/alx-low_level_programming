#include "main.h"
/**
*_strncat - Adds strings
*@dest: Parameter
*@src: Parameter
*@n: Prameter
*Return: Dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
	a++;
	while (b < n && *(src + b))
	{
	*(dest + a) = *(src + b);
	a++;
	b++;
	}
	if (b < n)
	*(dest + a) = *(src + b);
	return (dest);
}
