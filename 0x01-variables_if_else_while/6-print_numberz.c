#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: print numbers
 *Return: always 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		++i;
	}
	putchar('\n');
	return (0);
}
