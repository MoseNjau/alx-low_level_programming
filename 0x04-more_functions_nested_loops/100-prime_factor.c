#include <stdio.h>
/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: always 0
 */
int main(void)
{
unsigned long int mi, r = 612852475143;
for (mi = 3; mi < 782849; mi = mi + 2)
{
while ((r % mi == 0) && (r != mi))
r = r / mi;
}
printf("%lu\n", r);
return (0);
}

