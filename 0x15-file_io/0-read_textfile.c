#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: the file which should be read
 * @letters: the number of letters the filename to be printed
 *
 * Return: the actual number of letters it could read and print,
 * 0, if the filename is NULL
 * 0, if the filename cannot be opened or read
 * 0, if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	size_t count = 0;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buff = malloc((sizeof(char) * letters) + 1);
	if (buff == NULL)
	{
		return (0);
	}

	read(fd, buff, letters);
	buff[letters] = '\0';

	while (buff[count] != '\0')
	{
		count++;
	}

	close(fd);

	write(1, buff, (letters + 1));

	free(buff);

	return (count);
}
