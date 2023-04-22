#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *Description: determining wheather the number is positive or negative
 *Return: always 0
 */
int main(void)
{
	int n, last_digit;
	char output[100];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	sprintf(output, "Last digit of %d is %d", n, last_digit);
	if (n > 5)
	{
		strcat(output, " and is greater than 5");
		printf("%s", output);
	}
	else if (n == 0)
	{
		strcat(output, " and is 0");
		printf("%s", output);
	}
	else if (n < 6 && n != 0)
	{
		strcat(output, " and is less than 6 and not 0");
		printf("%s", output);
	}
	return (0);
}
