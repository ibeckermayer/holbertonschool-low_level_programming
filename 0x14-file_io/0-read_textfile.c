#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
				int fd, chars;
				/* unsigned int tot_chars = 0; */
				char buffer[BUFSIZ];

				if (!filename)
								return (0);
				fd = open(filename, O_RDONLY);
				if (fd == -1)
                return (0);

				chars = read(fd, buffer, letters);
				if (write(STDOUT_FILENO, buffer, chars) != chars)
				{
								close(fd);
								return (0);
				}

				close(fd);

				return (chars);
}
