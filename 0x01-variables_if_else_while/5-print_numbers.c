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
		print("%d\n", i);
		++i;
	}
	return (0);
}
