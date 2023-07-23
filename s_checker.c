#include "shell.h"
/**
 *checker- it checks to see if its a built in function
 *@cmd: it tokenized user input
 *@buf: Line drived fromgetline function
 *Return: 1 if cmd excuted 0 if cmd is hardly executed
 */
int checker(char **cmd, char *buf)
{
	if (handle_builtin(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		execution(cmd[0], cmd);
		return (1);
	}
	return (0);
}
