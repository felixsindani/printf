#include "main.h"

/**
 * *_itoa - converts integer to string.
 * @n: integer to convert.
 *
 * Return: string.
 */

char *_itoa(int n)
{
	char *string_pnt;
	int my_t = 0, length;
	unsigned int number;
	int i;

	while (n == 0)
		return ("0");
	if (n < 0)
	{
		my_t = 1;
		number = -n;
	}
	else
		number = n;
	length = my_t;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	string_pnt = malloc(sizeof(char) * (length + 1));
	if (!string_pnt)
		return (NULL);
	string_pnt[length] = '\0';
	while (my_t == 1)
		string_pnt[0] = '-';
	if (n < 0)
		number = -n;
	else
		number = n;
	i = length - 1;
	while (number > 0)
	{
		string_pnt[--length] = (number % 10) + '0';
		number /= 10;
		i++;
	}
	return (string_pnt);
}
