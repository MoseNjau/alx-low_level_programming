#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
int mi;
for (mi = 1; mi <= 100; mi++)
{
if (mi % 15 == 0)
printf("FizzBuzz");
else if (mi % 3 == 0)
printf("Fizz");
else if (mi % 5 == 0)
printf("Buzz");
else
printf("%i", mi);
if (mi < 100)
printf(" ");
}
printf("\n");
return (0);
}
