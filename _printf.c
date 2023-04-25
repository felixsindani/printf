#include "main.h"
#include <stdio.h>
#include <stdarg.h>
<<<<<<< HEAD
/*
 * _printf - function that sends output to stdio
 * @format: format specificier
 * Description: prnts data on stdio
 * Return: count
=======

/**
 * _printf - it prints output to stdio.
 *
 * Return: count.
>>>>>>> 5119277947f6e02b9c6ae67a88668039035de39b
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int a, b, c;
	int count = 0;
	char *s;
	va_list args;

	va_start(args, format);
	for (a = 0; format[a] != '\0'; a++)
=======
	unsigned int i, j, c;
	int count = 0;
	char *s;
	count = 0;

	va_list list;
	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
>>>>>>> 5119277947f6e02b9c6ae67a88668039035de39b
	{
		if (format[i] != '%')
			putchar(format[i]);
		else if (format[i + 1] == 'c')
		{
<<<<<<< HEAD
			c = va_arg(args, int);
			_putchar(c);
=======
			c = va_arg(list, int);
			putchar(c);
>>>>>>> 5119277947f6e02b9c6ae67a88668039035de39b
			count++;
			i++; 
		}
		else if (format[i + 1] == 's')
		{
<<<<<<< HEAD
			s = va_arg(args, char *);
			a++;
			b = 0;
=======
			s = va_arg(list, char *);
			i++;
			j = 0; 
>>>>>>> 5119277947f6e02b9c6ae67a88668039035de39b

			while (s[j] != '\0')
			{
<<<<<<< HEAD
				_putchar(s[b]);
				b++;
				count++;
=======
				putchar(s[j]);
				j++;
				count++; /*count number of items*/

>>>>>>> 5119277947f6e02b9c6ae67a88668039035de39b
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
