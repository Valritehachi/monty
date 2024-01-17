#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"


/**
 * monty_stack_pop - doubly linked list
 * @head: integer
 * Return: 0
 */
stack_t *monty_stack_pop(stack_t **head)
{
	stack_t *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	node = *head;
	if (node->next == NULL)
	{
		*head = NULL;
	}
	else
	{
		*head = node->next;
		node->next->prev = NULL;
	}
	return (node);
}
