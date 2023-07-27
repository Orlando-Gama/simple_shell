#include "shell.h"

/**
* append_path - it adds path to command
* @path: the path of command
* @command: entered command by usere
*
* Return: buffer that contains command with path on success
* NULL on failure
*/
char *append_path(char *path, char *command)
{
	char *buf;
	size_t k = 0, g = 0;

	if (command == 0)
		command = "";
	if (path == 0)
		path = "";
	buf = malloc(sizeof(char) * (_strlen(path) + _strlen(command) + 2));
	if (!buf)
		return (NULL);

	while (path[k])
	{
		buf[k] = path[k];
		k++;
	}

	if (path[k - 1] != '/')
	{
		buf[k] = '/';
		k++;
	}

	while (command[g])
	{
		buf[k + g] = command[g];
		g++;
	}
	buf[k + g] = '\0';

	return (buf);
}
