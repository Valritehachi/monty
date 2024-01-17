#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
* monty_pall - main function
* stack: arguments
* arg: arguments
* line_number: arguments
* Return: 0.
*/
void monty_pall(stack_t **stack, char *arg, unsigned int line_number)
{
	stack_t *node;

	arg = arg;
	line_number = line_number;

	if(stack == NULL || *stack == NULL)
	{
		return;
	}
	node = *stack;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}
