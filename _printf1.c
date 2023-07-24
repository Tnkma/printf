#include "main.h"

/**
 * _printf - A function that handles cases of %c, %s, %%
 * @format: the arg function that accept the cases
 * Return: the count of the printed cases
 */
int _printf(const char *format, ...)
{
	va_list print_em;
	unsigned int i = 0;
	int count = 0, j;
	char *str;

	va_start(print_em, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					p_utchar(va_arg(print_em, int));
					count++;
					break;
				case 's':
					str = va_arg(print_em, char *);
					for (j = 0; str[j] != '\0'; j++)
					{
						p_utchar(str[j]);
						count++;
					}
					break;
				default:
					p_utchar(format[i]);
					count++;
					break;
			}
		}
		else
		{
			p_utchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(print_em);
	return (count);
}
