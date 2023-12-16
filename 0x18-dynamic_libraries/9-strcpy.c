#include "main.h"
#include <stddef.h>

/**
 * _strcpy - copies a string
 *
 * @dest: first pareameter
 * @src: second oarameter
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int mi;

	if (dest == NULL)
		return (NULL);

	mi = 0;
	while (*(src + mi))
	{
		*(dest + mi) = *(src + mi);
		mi++;
	}

	*(dest + mi) = '\0';
	return (dest);
}
