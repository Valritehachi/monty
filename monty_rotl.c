#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * monty_rotl - Rotates.
 * @stack: pointer.
 * @arg:  argument.
 * @line_number: Line number.
 * Return: Void.
 */
void monty_rotl(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *temp, *last;

	arg = arg; 
	line_number = line_number;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	temp = *stack;
	last = *stack;

	*stack = temp->next;
	temp->next = NULL;
	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = temp;
}
