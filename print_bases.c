#include "main.h"

/**
 * print_binary - prints an integer in base 2
 * @args_l: list of arguments
 * Return: count of characters printed
 */
int print_binary(va_list args_l)
{
	unsigned int n;
	int l, i, j;
	char *p, *rev_s;

	n = va_arg(args_l, unsigned int);
	l = base_len(n, 2);
	p = malloc(sizeof(char) * l + 1);
	if (p == NULL)
		return (-1);
	i = 0;
	while (n > 0)
	{
		p[i] = 48 + n % 2;
		n /= 2;
		i++;
	}
	p[i] = '\0';
	rev_s = rev_str(p);
	if (rev_s == NULL)
		return (-1);

	j = 0;
	while (rev_s[j] != '\0')
	{
		_putchar(rev_s[j]);
		j++;
	}
	free(p);
	free(rev_s);
	return (l);
}
