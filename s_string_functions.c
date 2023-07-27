#include "shell.h"

/**
* _strcmp - makes comparison for two strings
* @s1: its  related to s2;
* @s2: its related to s1;
*
* Return: It returns differences for strings
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, output;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
		i++;

	output = (*(s1 + i) - *(s2 + i));

	return (output);
}

/**
* _strlen - gives string length
* @s: string passed
*
* Return: The lines gives length of string passed
*/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* _strncmp - used to compare two strings up to n bytes
* @s1: It compares to s2
* @s2: It compares to s1
* @n: defines the number of bytes
*
* Return: It shows the difference between s1 and s2
*/
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

/**
* _strdup - It dupicates string
* @s: stands for a variable to be duplicated
*
* Return: pointer to duplicate string
*/
char *_strdup(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* _strchr - for finding a char in a string
* @s: string to be checked
* Return: It returns a pointer to first instance of character
* @c: character to be located
* or it returns null IF NOT FOUND
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}

