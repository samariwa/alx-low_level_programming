#include "main.h"
#include<stdio.h>
/**
 * cp_file_content - copies content from one file to another
 * @from_file: the file which should be copied from
 * @to_file: the file which should be copied to
 * Description: if the file doesnt exist, a new one is created and text copied
 * if it does exist and has text, text is appended,
 * copying is done 1024 bytes at a time using a buffer
 *
 * Return: 1 on success,
 */
int cp(const char *file_from, const char *file_to)
{
	int fd1, fd2,result;
	char *buffer;
	size_t count = _strlen(text_content);

	if (file_file == NULL)
	{
		printf("Error: Can\'t read from file %s\n", from_file);
		exit(98);
	}



	fd1 = open(file_to, O_CREAT | O_RDWR, 0600);

	result = write(fd1, text_content, count);

	if (result <= 0)
	{
		write(1, "Opening failed", 15);
                printf("Error: Can\'t write to %s\n", to_file);
                exit(99);
	}

	close(fd1);

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
