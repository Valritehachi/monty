#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * monty_rotr - Rotates.
 * @stack: pointer.
 * @arg:  argument.
 * @line_number: Line number.
 * Return: Void.
 */
void monty_rotr(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *temp, *node;

	arg = arg;
	line_number = line_number;
	if (stack == NULL || *stack == NULL)
	{
		return;
	}
	temp = monty_stack_shift(stack);
	if (temp == NULL)
	{
		return;
	}
	node = monty_stack_push(stack, temp->n);
	free(temp);
	if (node == NULL)
	{
		exit(EXIT_FAILURE);
	}
}
