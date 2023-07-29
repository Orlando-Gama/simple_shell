#include "shell.h"

/**
 * _getenv - gets the value of environment variable
 * @name: name of environment variable
 *
 * Return: Value of environment variable, or NULL if it hardly exist
 */
char *_getenv(const char *name)
{
	char **env;
	size_t name_len = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (&(*env)[name_len + 1]);
		}
	}

	return (NULL);
}
