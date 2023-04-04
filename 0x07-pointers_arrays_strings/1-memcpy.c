#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ar;

	ar = 0;
	while (ar < n)
	{
		*(dest + ar) = *(src + ar);
		ar++;
	}
	return (dest);
}

