#include "shell.h"

/**
 * prompt - PRINTING ALL COMMANDS INTO STANDARD STREAM
 *
 * Return: IT RETURNS VOID.
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}

