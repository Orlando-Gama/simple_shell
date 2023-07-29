#include "shell.h"

/**
 * handle_sigint - SIGNINT HANDLER
 * @sig: STANDS FOR SIGNAL NUMBER
 * Return: NULL
 */
void handle_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}

/**
 * handle_sigquit - SIGQUIT HANDLER
 * @sig: SIGNAL NUMBER
 *
 * Return: NULL
 */
void handle_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_sigstp - SIGSTP HANDLER
 * @sig: SIGNAL NUMBER
 *
 * Return: NULL
 */
void handle_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}

