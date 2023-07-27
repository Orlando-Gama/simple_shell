#include "shell.h"

/**
* find_path - identify the path to the entire env.
* Return: path is returned when found and Null if not found
*/
char *find_path(void)
{
	int h;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (_strncmp(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && h < 5)
			{
				path++;
				h++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}

