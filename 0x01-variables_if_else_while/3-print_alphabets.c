#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: printing alphabets small and big
 *Return: always 0
 */
int main(void)
{
	char letter = 'a', end = 'z';

	while (letter <= end)
	{
		putchar(letter);
		if (letter == 'z')
		{
			letter = 'A';
			end = 'Z';
		}
		else
		{
			++letter;
		}
	}
	putchar('\n');
	return (0);
}
