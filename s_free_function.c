#include "shell.h"

/**
* free_buffers - it frees buffers
* @buf: the buffer to be freed
*
* Return: no return
*/
void free_buffers(char **buf)
{
	int j = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[j])
	{
		free(buf[j]);
		j++;
	}
	free(buf);
}
