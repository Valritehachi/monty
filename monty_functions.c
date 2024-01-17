#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "monty.h"


instruction_t function_table[] = {
	{ "push", monty_push },
	{ "pall", monty_pall },
	{ NULL, NULL }
};

/**
* is_space - main function
* @c: arguments
* Return: 0.
*/
MontyFunction monty_get_function(char *op)
{	
	int i = 0;

	while(function_table[i].f != NULL)
	{
		if (_strcmp(function_table[i].opcode, op) == 0)
		{
			return (function_table[i].f);
		}
		i++;
	}
	return (NULL);
}

