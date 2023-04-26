#include "main.h"
/*
* _printf - function that prints on stdio
* @format: format
* description: sends data to stdio
* Return: count
*/
int _printf(const char *format, ...)
{
	int j;
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
		else if (format[a + 1] == 'd' || format[a + 1] == 'i')
		{
			int d = va_arg(var_name, int);
			s = _itoa(d);
			for (j = 0; s[j]; j++)
			{
				_putchar(s[j]);
				count++;
			}
		}
		else
		{
			_putchar('%');
			_putchar(*format);
			count += 2;
		}
		format++;
		va_end(var_name);
	}
	return (count);
}
