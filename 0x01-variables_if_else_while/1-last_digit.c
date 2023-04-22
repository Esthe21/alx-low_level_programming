#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: determining wheather the number is positive or negative
 *Return: always 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, Last_digit);
	}
	return (0);
}
