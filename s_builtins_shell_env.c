#include "shell.h"

/**
 * shell_env -it  Prints all environment variables.
 *
 * Return: Void.
 */
int shell_env(void)
{
	int k;

	for (k = 0; environ[k]; k++)
	{
		_puts(environ[k]);
		_putchar('\n');
	}
	return (0);
}

