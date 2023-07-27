#include "shell.h"

/**
* _putchar - USE to write standard c to standard out
* @c: THE required char to be printed
*
* Return: ON success 1.
* On error, returns -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_s -USED to print a string variable.
* @s: The required string to be printed.
*
* Return: NUMBER of strings
*/
int print_s(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

