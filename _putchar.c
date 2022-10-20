#include "main.h"

/**
 * _putchar - writes the character to the standard output
 *
 * @c: param
 *
 * Return: 1 success -1 failure
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
