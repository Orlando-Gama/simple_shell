#include "shell.h"

/**
* test_path - checks path validity
* @path: denotes a path that is tokenised
* @command:stands for an entered command
*
* Return: appended path
* ON FAILURE it returns NULL
*/
char *test_path(char **path, char *command)
{
	int h = 0;
	char *output;

	while (path[h])
	{
		output = append_path(path[h], command);
		if (access(output, F_OK | X_OK) == 0)
			return (output);
		free(output);
		h++;
	}
	return (NULL);
}

