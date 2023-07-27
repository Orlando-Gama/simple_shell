#include "shell.h"

/**
* print_env - output the string to standard out
*
* Return: The result is 0
*/
void print_env(void)
{
	int h = 0;
	char **env = environ;

	while (env[h])
	{
		write(STDOUT_FILENO, (const void *)env[h], _strlen(env[h]));
		write(STDOUT_FILENO, "\n", 1);
		h++;
	}
}

