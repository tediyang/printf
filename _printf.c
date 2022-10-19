#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - similar to printf function.
 *
 * @format: param
 *
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int a, n, c;
	va_list arg;

	va_start(arg, format);

	c = 0;

	while (format[c])
		c++;

	for (a = 0; a < c; a++)
	{
		if (format[a] == '%' && format[a - 1] == '%')
			_putchar(format[a]);
		else if (format[a] == '%')
			continue;
		else if (format[a] == 'c' && format[a - 1] == '%')
			_putchar(va_arg(arg, int));
		else if (format[a] == 's' && format[a - 1] == '%')
		{
			char *p;

			p = va_arg(arg, char *);
			for (n = 0; p[n]; n++)
			{
				_putchar(p[n]);
			}
		}
		else
			_putchar(format[a]);
	}
	return (0);
}
