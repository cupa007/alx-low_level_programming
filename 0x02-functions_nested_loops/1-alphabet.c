#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase.
 * Return: On success 1
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
