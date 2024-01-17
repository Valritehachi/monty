#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * monty_stack_free- doubly linked list
 * @head: integer
 * Return: 0
 */
void monty_stack_free(stack_t *head)
{
	stack_t *next_node;

	if (head == NULL)
	{
		return;
	}
	next_node = head->next;
	free(head);
	monty_stack_free(next_node);
}
