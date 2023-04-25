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
	va_list arg;
	va_start(arg, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
			putchar(format[a]);
		else if (format[a + 1] == 'c')
		{
			c = va_arg(arg, int);
			putchar(c);
			count++;
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(arg, char *);
			a++;
			b = 0;

			while (s[b] != '\0')
			{
				putchar([b]);
				b++;
				count++;
			}
		}
		else if (format[a + 1] == '%')
		{
			putchar('%');
			count++;
			a++;
		}
	}
	return (count);
}
