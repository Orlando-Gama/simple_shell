#include "shell.h"

/**
* exit_cmd - it handles the exit command
* @command: the tokenised command
* @line: it inputs read from stdin
*
* Return: no return
*/
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);

	exit(0);
}
