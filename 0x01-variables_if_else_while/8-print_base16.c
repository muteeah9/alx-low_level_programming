#include <stdio.h>
/**
  * main - prints all the numbers of base 16 in lowercase,
  *
  * Return: Always 0 success
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 97;  n <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
