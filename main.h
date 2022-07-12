#ifndef MAIN_H
#define MAiN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format_t - format types
 * @spc: specification
 * @f: function pointer
 */
typedef struct format_t
{
	char *spc;
	int (*f)(va_list args);
}fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args_l);
int print_string(va_list args_l);
int print_percent(va_list args_l);
int print_integer(va_list args_l);
int print_unsigned_integer(va_list args_l);
int print_number(va_list args_l);
int print_unsgined_number(unsigned int n);
int parse_value(const char *format, fmt_t f_list[], va_list args);

/* ====TESTS==== */
int test_print_char(void);

#endif
