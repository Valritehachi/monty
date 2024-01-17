#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * monty_pstr - Prints the string starting at the top of the stack.
 * @stack: Double pointer to the beginning of the stack.
 * @arg: Unused argument.
 * @line_number: Line number in the Monty byte code file.
 * Return: Void.
 */
void monty_pstr(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *current;

	line_number = line_number;
	arg = arg;

	current = *stack;
	while (current)
	{
		if (current->n > 127 || current->n <= 0)
		{
			break;
		}
		printf("%c", current->n);
		current = current->next;
	}
	printf("\n");
}
