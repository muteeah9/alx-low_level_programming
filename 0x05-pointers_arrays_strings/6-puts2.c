#include "main.h"
#include <stdio.h>

/**
  * puts - prints a string followed by a new line
  * @str: pointer to the string to print
  * Return: void
  */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{

		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
