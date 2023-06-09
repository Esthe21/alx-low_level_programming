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
	if (last_digit > 5)
	{
		strcat(output, " and is greater than 5");
		printf("%s\n", output);
	}
	else if (last_digit == 0)
	{
		strcat(output, " and is 0");
		printf("%s\n", output);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		strcat(output, " and is less than 6 and not 0");
		printf("%s\n", output);
	}
	return (0);
}
