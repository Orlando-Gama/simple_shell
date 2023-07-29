#include "shell.h"

/**
 * shell_cd - this changes current working dir of the shell
 * @args: an array of args
 */
void shell_cd(char **args)
{
	char *dir = args[1];
	int ret;

	/* If no arg is provided, change to HOME directory */
	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			_puts("cd: No HOME directory found\n");
			return;
		}
	}
	ret = chdir(dir);
	if (ret == -1)
	{
		perror("cd");
	}
}
