#include "shell.h"

/**
 * _puts - It prints string to standard output stream
 * @str: the string to be printed
 *
 * Return: Void
 */
void _puts(char *str)
{
	size_t len;
	ssize_t num_written;

	len = _strlen(str);
	num_written = write(STDOUT_FILENO, str, len);
	if (num_written == -1)
	{
		perror("write");
	}
}

/**
 * _puterror - it Prints error message to standard error stream
 * @err: The error message to be printed
 *
 * Return: Void
 */
void _puterror(char *err)
{
	size_t len;
	ssize_t num_written;

	len = _strlen(err);
	num_written = write(STDERR_FILENO, err, len);
	if (num_written == -1)
	{
		perror("write");
	}
}

