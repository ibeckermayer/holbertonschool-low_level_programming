#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (fd);

	if (text_content)
	{
		ret = write(fd, text_content, BUFSIZ);
		if (ret == -1)
		{
			close(fd);
			return (ret);
		}

	}

	close(fd);
	return (1);
}
