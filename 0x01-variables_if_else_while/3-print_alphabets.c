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

	letter = 'a';
	while (letter != 'z')
	{
		putchar(letter);
		++letter;
	}
	return (0);
}
