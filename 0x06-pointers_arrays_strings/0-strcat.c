#include "main.h"
/**
*_strcat - Entry Point
*@dest: Parameter
*@src: Parameter
*
*Return: destination string
*/
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (*(dest + a))
		a++;
	while ((*(dest + a) = *(src + b)))
	{
		a++;
		b++;
	}
	return (dest);
}

