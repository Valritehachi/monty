#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* is_space - main function
* @c: arguments
* Return: 0.
*/
int is_space(char c)
{
	return (c <= 32 ? 0 : -1);
}


/**
* is_alpha - main function
* @c: arguments
* Return: 0.
*/
int is_alpha(char c)
{
	return  (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) ? 0 : -1);
}

/**
* is_digit- main function
* @c: arguments
* Return: 0.
*/
int is_digit(char c)
{
	return ((c >= '0' && c <= '9') || (c == '-' && is_space(c - 1) == 0) ? 0 : -1);
}

/**
* monty_read_command - main function
* @op: arguments
* @param: arguments
* @line: arguments
* Return: 0.
*/
int  monty_read_command(char *line, char *op, char *param)
{
	char *s, *d;

	s =  line;
	op[0]   = 0;
	param[0] = 0;

	if (*s != 0)
	{
		while (*s != 0 && is_space(*s) == 0)
		{
			s++;
		}
		if (*s == 0)
		{
			return (0);
		}
		d = op;
		while (*s != 0 && is_alpha(*s) == 0)
		{
			*d++ = *s++;
		}
		*d = 0;
		while (*s != 0 && is_space(*s) == 0)
		{
			s++;
		}
		if (*s == 0)
		{
			return (0);
		}
		d = param;
		while (*s != 0 && is_digit(*s) == 0)
		{
			*d++ = *s++;
		}
		*d = 0;
	}
	return (0);
}
