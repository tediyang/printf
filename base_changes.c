#include "main.h"
#include <stdio.h>

/**
 * hex_check - checks hex function
 *
 * @num: num to convert
 * @x: function calling
 *
 * Return: Ascii value for letter
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);

	return (0);
}

/**
 * print_binary - converts a number to binary
 *
 * @list: lists passed
 *
 * Return: The length of the number printed.
 */

int print_binary(va_list list)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev_str;

	num = va_arg(list, unsigned int);
	if (num = 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);

	return (len);
}

/**
 * print_octal - prints in octa base.
 *
 * @list: list of all argument
 *
 * Return: Number of symbols printed to stdout.
 */

int print_octal(va_list list)
{
	unsigned int num;
	int len;
	char *octal;
	char *rev_str;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal = malloc(sizeof(char) * len + 1);
	if (octal == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal[len] = '\0';
	rev_str = rev_string(octal);
	if (rev_str = NULL)
		return (-1);

	write_base(rev_str);
	free(octal);
	free(rev_str);

	return (len);
}

/**
 * print_hex - prints base 16 lowercase.
 *
 * @list: param
 *
 * Return: number of characters printed.
 */

int print_hex(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);

	return (len);
}

/**
 * print_heX - print base 16 in uppercase
 *
 * @list: param
 *
 * Return: characters printed
 */

int print_heX(va_list list)
{
	unsigned int num;
	int len;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'X');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	write_base(rev_hex);
	free(hex_rep);
	free(rev_hex);

	return (len);
}
