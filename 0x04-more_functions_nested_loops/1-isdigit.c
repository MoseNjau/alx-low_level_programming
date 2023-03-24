#include "main.h"
/**
 * _isdigit - checks for characters that are digits
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isdigit(int b)
{
if (b >= '0' && b <= '9')
return (1);
else
return (0);
}
