#include "main.h"
int check_seperators(char c);

/**
 * *cap_string - Capitalizes all words of a string
 * @s: string whose letters should be capitalized
 *
 * Return: The result of the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}

	return (s);
}

/**
 * check_seperators - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, \", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int check_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	for (; i < 13; i++)
	{
		if (c == seperators[i])
			return (1);
	}
	return (0);
}
