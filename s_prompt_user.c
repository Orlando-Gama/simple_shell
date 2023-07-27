#include "shell.h"

/**
* prompt_user - print $ to inform user
* it also prints the prompt in interactive
* Return: Does not return anything
*/
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

