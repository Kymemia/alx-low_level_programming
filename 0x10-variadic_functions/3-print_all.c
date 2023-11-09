#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int yy = 0;
	char current_format;
	char *separator = "";

	va_start(args, format);
	while (format && format[yy])
	{
		current_format = format[yy];
		switch (current_format)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				{
					char *arg = va_arg(args, char *);

					if (arg == NULL)
					{
						printf("%s%s", separator, "(nil)");
					}
					else
					{
						printf("%s%s", separator, arg);
					}
				}
				break;
		}
		separator = ", ";
		yy++;
	}
	va_end(args);
	printf("\n");
}
