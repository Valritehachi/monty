#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_push - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: void.
*/

void monty_push(stack_t **stack, char *arg, unsigned int line_number)
{
	int value;

	int badarg = (arg != NULL && *arg != '0' && atoi(arg) == 0);

	if (arg == NULL || *arg == 0 || badarg)
	{
		fprintf(stderr, "%d: usage: push integer\n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);

	if(monty_get_mode() == 0)
	{
		monty_stack_push(stack, value);
	}
	else
	{
		monty_stack_append(stack, value);
	}
}
