#include "shell.h"

/**
 * _strcpy - copy the STRING
 * @src: THE MAIN SOURCE
 * @dest: THE DESTINATION OF STRING
 * Return: POINTER TO DESTINATION
 */
char *_strcpy(char *dest, char *src)
{
	int h = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[h])
	{
		dest[h] = src[h];
		h++;
	}
	dest[h] = 0;
	return (dest);
}

/**
 * _strcat - CONNECTS THE TWO STRINGS
 * @dest: BUFFER DESTINATION
 * @src: BUFFER SOURCE
 *
 * Return: THE POINTER TO SOURCE
 */
char *_strcat(char *dest, const char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 *_putchar - WRITEE C CHARACTER TO STANDARD OUTPUT
 * @c: THE CHARACTER TO BE PRINTED
 * ON ERROR, -1 IS RETURNED, AND ERRNO IS SET APPROPRIATELY.
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strspn - FUNCTION THAT COLLECTS THE
 * length OF THE PREF SUBSTRING
 *
 * @s: POINTER TO STRING INPUT
 * @accept: SUBSTRING TO BE SEARCHED
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h, j;

	for (h = 0; s[h]; h++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[h] == accept[j])
				break;
		}
		if (!accept[j])
			return (h);
	}

	return (h);
}

