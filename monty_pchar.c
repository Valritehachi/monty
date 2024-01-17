#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_pchar - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_pchar(stack_t **stack, char *arg, unsigned int line_number)
{
	arg = arg;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, empty\n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}

	putchar((*stack)->n);
	putchar('\n');
}
