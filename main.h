#ifndef MAIN_H
#define MAiN_H
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
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args_l);
int print_string(va_list args_l);
int print_percent(va_list args_l);
int print_integer(va_list args_l);
int print_unsigned_integer(va_list args_l);
int print_number(va_list args_l);
int print_unsgined_number(unsigned int n);
int print_binary(va_list args_l);
int print_octal(va_list args_l);
int print_hex_x(va_list args_l);
int print_hex_X(va_list args_l);
int parse_value(const char *format, fmt_t f_list[], va_list args);

/* ====UTILS==== */
unsigned int base_len(unsigned int num, int base);
char *rev_str(char *);
char *_memcpy(char *, char *, unsigned int );
int hex_check(int num, char x);

/* ====TESTS==== */
int test_print_char(void);

#endif
