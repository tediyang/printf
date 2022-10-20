#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct check - define structure of symbols
 *
 * @sym: The operator
 * @f: The function
 */

typedef struct check
{
	char *sym;
	int (*f)(va_list);
} checker;

/* Main function */
int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, checker f_lists[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

/* Helper functions */
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);

#endif /* ifndef */
