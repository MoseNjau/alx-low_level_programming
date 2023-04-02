#include "main.h"
/**
 *_strncpy - Copies a string
 *@dest: Parameter
 *@src: Parameter
 *@n: Parameter
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && *(src + a))
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}

