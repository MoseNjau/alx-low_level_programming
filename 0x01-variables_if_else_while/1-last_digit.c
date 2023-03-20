/**
* main will print the last digit of a randomly generated digit
*
* It will state whether it is greater than 5, les than 6, or 0
*
* return: always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("The last digit of %d is %d and it is greater than S\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("The last digit of %d is %d and is 0\n",
			n, n % 10);
	}
	return (0);

}
