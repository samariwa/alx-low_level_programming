#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file which should be read
 * @text_content: a null terminating string to write to the file
 * Description: if the content is NULL, an empty file is created
 *
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t count = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
	{
		write(1, "Opening failed", 15);
		return (-1);
	}

	write(fd, text_content, count);

	close(fd);

	return (1);
}

/**
 * _strlen - count the length of a string
 * @s: the string that we want to know the length of
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
