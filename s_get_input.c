#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static char *last_input;

/**
 * get_input - Reads a line of input from the user.
 *
 * Return: A pointer to a buffer that contains the user's input.
 *         Returns NULL if EOF or error occurs.
 */
char *get_input(void)
{
	char *input = NULL;
	size_t input_size = 0;
	ssize_t nread;

	do {
		/* Print shell prompt */
		prompt();
		/* Get a line of input from the user */
		nread = getline(&input, &input_size, stdin);
		/* Check for EOF or error */
		if (nread == -1)
		{
			free(input);
			_puts("\n");
			return (NULL);
		}
		/* Removes trailing newline character */
		if (input[nread - 1] == '\n')
			input[nread - 1] = '\0';
	} while (input[0] == '\0' || isspace((unsigned char)input[0]));

	/* Update last_input to point to the new input */
	free(last_input);
	last_input = strdup(input); /* Store a duplicate of the input */
	return (input);
}

/**
 * free_last_input - Frees most recent input entered by the user.
 *
 * The function frees memory allocated for the most recent input string
 * entered by the user. It should be called after the input string is
 * no longer needed.
 */
void free_last_input(void)
{
	free(last_input);
	last_input = NULL;
}

