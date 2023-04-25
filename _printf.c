#include "main.h"
#include <stdio.h>

/*
 * _printf - function that sends output to stdio
 * 
 *
 */
int _printf(const char *format, ...)
{
	int count, a, b, c;
	char *s;
	count = 0;

	va_list var_name;
	va_start(var_name, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			_putchar(format[a]);
		else if (format[a + 1] == 'c');
		{
			c = va_arg(var_name, int);
			_putchar(c);
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(var_name, char *);
			a++;
			b = 0;

			while (s[b] != '\0')
			{
				_putchar([b]);
				b++;
				count++;
			}
		}
		else if (format[a + 1] == '%')
		{
			_putchar('%');
			a++;
		}
		count++;
	}
	count--;
	return (count);
}
