#include <unistd.h>

/*
 * _putchar - printing function
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));

}
