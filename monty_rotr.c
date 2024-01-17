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
	stack_t *temp, *first;

	arg = arg;
	line_number = line_number;
	if (stack == NULL || *stack == NULL)
	{
		return;
	}
	temp = monty_stack_pop(stack);
	if (temp == NULL)
	{
		return;
	}
	first = *stack;
    while (first->next != NULL)
    {
        first = first->next;
    }

    first->next = temp;
    temp->next = NULL;
	free(temp);
	if (first == NULL)
	{
		exit(EXIT_FAILURE);
	}
}
