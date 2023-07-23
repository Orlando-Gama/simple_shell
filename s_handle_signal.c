#include "shell.h"

/**
 * handle_signal- Keeps track is interactive mode
 * @m: signal number
 * Return: Nothing
 */

void handle_signal(int m)
{
	(void)m;

	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
