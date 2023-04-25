#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/*
 * _printf - function that sends output to stdio
 * @format: format specificier
 * Description: prnts data on stdio
 * Return: count
 */
int _printf(const char *format, ...)
{
	int a, b, c;
	int count = 0;
	char *s;
	va_list args;

	va_start(args, format);
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			c = va_arg(args, int);
			_putchar(c);
			count++;
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(args, char *);
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
