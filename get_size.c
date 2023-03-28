#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 *
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: size
 */
int get_size(const char *format, int *i)
{
	int x = *i + 1;
	int y = 0;

	if (format[x] == '1')
		y = S_LONG;
	else if (format[x] == 'h')
		y = S_SHORT;

	if (y == 0)
		*i = x - 1;
	else
		*i = x;
	return (y);
}
