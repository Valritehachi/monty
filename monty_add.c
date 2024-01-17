#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_add - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_add(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *temp;

	arg = arg;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;

	temp = *stack;
	*stack = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = NULL;
	}
	free(temp);
}
