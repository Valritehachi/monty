#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "monty.h"


instruction_t function_table[] = {
	{ "push", monty_push },
	{ "pall", monty_pall },
	{ "pint", monty_pint },
	{ "pop", monty_pop },
	{ "swap", monty_swap },
	{ "add", monty_add },
	{ "sub", monty_sub },
	{ "div", monty_div },
	{ "mul", monty_mul },
	{ "mod", monty_mod },
	{ "nop", monty_nop },
	{ "pchar", monty_pchar },
	{ "pstr", monty_pstr },
	{ "rotl", monty_rotl },
	{ NULL, NULL }
};

/**
* is_space - main function
* @op: arguments
* Return: 0.
*/
MontyFunction monty_get_function(char *op)
{
	int i = 0;

	while (function_table[i].f != NULL)
	{
		if (_strcmp(function_table[i].opcode, op) == 0)
		{
			return (function_table[i].f);
		}
		i++;
	}
	return (NULL);
}

