#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_pint - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_pint(stack_t **stack, char *arg, unsigned int line_number)
{
	arg = arg;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty, \n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
