#include <stdio.h>
/**
  * main - print alphabet in lowercase followed by a new line
  *
  * Return: Always 0 success
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
