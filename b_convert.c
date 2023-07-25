#include "main.h"

/**
 * b_convert - convert and prints int to binary
 * @format: the custom specifier
 *
 * Return: the count of int printed
 */

void b_convert(const char *format, ...)
{
	va_list numb;
	int i;

	va_start(numb, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'r')
			{
				i = va_arg(numb, int);
				convert_binary(i);
			}
		}
		else
		{
			p_utchar(*format);
		}
		format++;
	}

	va_end(numb);
}
