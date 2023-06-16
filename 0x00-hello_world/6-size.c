#include <stdio.h>
/**
  *main - A program that prints the size of various types on the computer
  *Return: always 0 (success)
  */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
