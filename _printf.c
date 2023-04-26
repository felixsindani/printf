#include "main.h"

/**
 * _printf - printf function.
 * @format: format.
 * Return: count.
 */

int _printf(const char *format, ...)
{
	unsigned int a, b, c;
	int count = 0;
	char *s;
	va_list var_name;

	va_start(var_name, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			_putchar(format[a]);
		else if (format[a + 1] == 'c')
		{
			c = va_arg(var_name, int);
			_putchar(c);
			count++;
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(var_name, char *);
			a++;
			b = 0;
			while (s[b] != '\0')
			{
				_putchar(s[b]);
				b++;
				count++;
			}
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			count++;
			a++;
		}
	}
	return (count);
}
