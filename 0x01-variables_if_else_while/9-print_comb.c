#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: combination
 *Return: always 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 10)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		++num;
	}
	putchar('\n');
	return (0);
}
