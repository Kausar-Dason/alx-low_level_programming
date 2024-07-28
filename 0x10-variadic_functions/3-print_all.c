#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	int stat_check;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				stat_check = 0;
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				stat_check = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				stat_check = 0;
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				stat_check = 1;
				break;
		}
		if (format[i + 1] != '\0' && stat_check == 0)
			printf(", ");
		i++;
	}

	printf("\n");

	va_end(args);
}

