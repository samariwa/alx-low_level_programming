#include "main.h"
#include<stdio.h>

/**
 * main - copies content from one file to another
 * @from_file: the file which should be copied from
 * @to_file: the file which should be copied to
 * Description: if the file doesnt exist, a new one is created and text copied
 * if it does exist and has text, text is appended,
 * copying is done 1024 bytes at a time using a buffer
 *
 * Return: Nothing
 */
int main(int argc, char **argv)
{
	int fd1, fd2,result, buffer_size = 1024;
	char *file_from, *file_to, *buffer;
	/*size_t count = _strlen(text_content);*/

	if (argc != 3)
	{
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (file_from == NULL)
	{
		printf("Error: Can\'t read from file %s\n", file_from);
		exit(98);
	}

	buffer = malloc(buffer_size);
	if (buffer == NULL)
	{
		exit(1);
	}

	fd1 = open(file_from, O_RDONLY);

	result = read(fd1, buffer, buffer_size);

	if (result <= 0)
	{
		write(1, "Opening failed", 15);
		printf("Error: Can\'t read from file %s\n", file_from);
		exit(98);
	}

	close(fd1);

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_APPEND, 0600);

	result = write(fd2, buffer, buffer_size);

	if (result <= 0)
	{
		write(1, "Opening failed", 15);
                printf("Error: Can\'t write to %s\n", file_to);
                exit(99);
	}

	close(fd2);

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
