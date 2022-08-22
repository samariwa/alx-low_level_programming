#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file in which text is appended at the end
 * @text_content: the text to be appended at the end of the file
 * Description: File should not be created if it does not exist,
 * nothing should be added to the file if the text_content is null
 *
 * Return 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result;
	size_t count = _strlen(text_content);

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	result = write(fd, text_content, count);

	if (result <= 0)
	{
		return (-1);
	}

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
