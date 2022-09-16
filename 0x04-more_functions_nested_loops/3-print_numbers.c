#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints all numbers
 * 0 to 9
 *
 * Return: retuns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
