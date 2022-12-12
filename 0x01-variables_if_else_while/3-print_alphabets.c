#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putcher(ch);

	putcher('\n');

	return (0);
}
