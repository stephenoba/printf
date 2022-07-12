#include "main.h"

/**
 * _printf - prints a formated string
 * @format: string containing characters to be printed and their format
 * Return: length of string printed
 */
int _printf(const char *format, ...)
{
	int num_p;
	/**
	* Initialize function list.
	* aall functions must accept va_list args as an argument,
	* and return an integer.
	*/
	fmt_t func_l[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{NULL, NULL}
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	/* call the parse_value function like vprintf */
	num_p = parse_value(format, func_l, args);
	va_end(args);

	return (num_p);
}
