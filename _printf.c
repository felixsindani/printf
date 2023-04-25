#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - it prints output to stdio.
 *
 * Return: count.
 */

int _printf(const char *format, ...)
{
	unsigned int i, j, c;
	int count = 0;
	char *s;
	count = 0;

	va_list list;
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			putchar(format[i]);
		else if (format[i + 1] == 'c')
		{
			c = va_arg(list, int);
			putchar(c);
			count++;
			i++; 
		}
		else if (format[i + 1] == 's')
		{
			s = va_arg(list, char *);
			i++;
			j = 0; 

			while (s[j] != '\0')
			{
				putchar(s[j]);
				j++;
				count++; /*count number of items*/

			}
		} 
		else if (format[i + 1] == '%')
		{
			putchar('%');
			count++;
			i++;
		}

	}
	return (count);
}
