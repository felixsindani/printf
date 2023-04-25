#include "main.h"
#include <stdio.h>
#include <stdarg.h>
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
<<<<<<< HEAD
			_putchar(format[a]);
		else if (format[a + 1] == 'c')
		{
			c = va_arg(var_name, int);
			_putchar(c);
=======
		{
			_putchar(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			c = va_arg(arg, int);
			_putchar(c);
			count++;
>>>>>>> 4f3a40d88ef359b34db854bfee229de25939d902
			a++;
		}
		else if (format[a + 1] == 's')
		{
			s = va_arg(arg, char *);
			a++;
			b = 0;

			while (s[b] != '\0')
			{
				_putchar(b);
				b++;
				count++;
			}
		}
		else if (format[a + 1] == '%')
		{
<<<<<<< HEAD
			putchar('%');
=======
			_putchar('%');
			count++;
>>>>>>> 4f3a40d88ef359b34db854bfee229de25939d902
			a++;
		}
	}
	return (count);
}
