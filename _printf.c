#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - similar to printf function.
 *
 * @format: param
 *
 * Return: the total chars counted
 */

int _printf(const char *format, ...)
{
	int chars;

	checker f_lists[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	chars = parser(format, f_lists, arg_list);
	va_end(arg_list);

	return (char);
}
