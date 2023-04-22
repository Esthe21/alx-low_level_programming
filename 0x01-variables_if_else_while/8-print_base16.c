#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: printing alphabets
 *Return: always 0
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}
	putchar('\n');
	return (0);
}
