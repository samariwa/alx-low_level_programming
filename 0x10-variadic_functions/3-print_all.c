#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 * if string is null, prints nill
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	size_t i = 0;
	int j;
	const char specifiers[] = "cifs";
	const char *type[] = {"char","int","float","string"}; 
	
	va_list args;

	va_start(args, format);
	while (i  < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specifiers[j])
			{
				if (format[i] == 's' && va_arg(args, char *) == NULL)
				{
					printf("(nil");
				}
				else
				{
					printf("%ld\n", i);
					printf("%d\n", j);
					printf("Print %s\n", type[j]);
				}
			}
			j++;	
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
