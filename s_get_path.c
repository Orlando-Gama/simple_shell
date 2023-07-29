#include "shell.h"

/**
 * get_path - it returns value of PATH enviroment variable.
 *
 * Return: Points the value of $PATH.
 */
char *get_path(void)
{
	return (getenv("PATH"));
}

