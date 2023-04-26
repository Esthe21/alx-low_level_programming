#include <unistd.h>

/**
  *_putcar - writes the character to stdout
  *Description - The character to print
  *Return: on sucess 1
  */

int _Putchar(char c)
{
	return (write(1, &c, 1));
}
