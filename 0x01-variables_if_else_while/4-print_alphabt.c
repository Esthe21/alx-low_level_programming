#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: without q an
 *Return: always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			++letter;
			continue;
		}
		else
		{
			putchar(letter);
			++letter;
		}
	}
	putchar('\n');
	return (0);
}
