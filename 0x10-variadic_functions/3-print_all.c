#include "variadic_functions.h"
/* check for nulls in strings */
#define NULL_S(S) ((S) == NULL ? ("(nil)") : (S))
/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 * if string is null, prints nil
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	size_t i = 0;
	int j;
	char *s, *t;
	const char specifiers[] = "cifs";
	va_list args;

	va_start(args, format);
	while (i  < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specifiers[j])
			{
				switch (format[i])
				{
				case 'c':
					printf("%c\n",
					       (unsigned char) va_arg(args, int));
					break;
				case 's':
					s = va_arg(args, char *);
					/* NULL_S does every thing */
					t = NULL_S(s);
					printf("%s\n", t);
					break;
				case 'i':
					printf("%d\n", va_arg(args, int));
					break;
				case 'f':
					printf("%f\n", va_arg(args, double));
					break;
				default:
					printf("Print %s\n", "Not available");
				}
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
