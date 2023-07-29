#include "shell.h"

/**
 * free_error - this frees alloc'd pointers following error
 * @argv: Pointer to an array of pointers
 * @arg: Pointer to an array of chars
 *
 * Return: void.
 */
void free_error(char **argv, char *arg)
{
	int k;

	for (k = 0; argv[k]; k++)
		free(argv[k]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * free_tokens - This frees memory allocated dynamically by tokenize()
 * @ptr: pointer to allocated memory
 *
 * Return: void.
 */
void free_tokens(char **ptr)
{
	int k;

	for (k = 0; ptr[k]; k++)
		free((ptr[k]));
	free(ptr);
}


/**
 * free_path -this Frees global variable containing the PATH environment
 * variable value
 *
 * Return: nothing
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t k = 0;

		while (environ[k] != NULL)
		{
			if (_strncmp(environ[k], "PATH=", 5) == 0)
			{
				free(environ[k]);
				environ[k] = NULL;
				break;
			}
			k++;
		}
	}
}

