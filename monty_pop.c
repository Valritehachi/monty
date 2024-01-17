#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_pop - Removes the top element of the stack.
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_pop(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *temp;

	arg = arg;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->next;
	free(temp);
}
