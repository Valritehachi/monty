#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_swap - main function
* @stack: arguments
* @arg: arguments
* @line_number: arguments
* Return: 0.
*/
void monty_swap(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *temp;

	arg = arg;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty, \n", line_number);
		monty_stack_free(*stack);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->prev = NULL;
	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = temp;
}
