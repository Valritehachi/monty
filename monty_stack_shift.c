#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * monty_stack_shift - doubly linked list
 * @n: integer
 * @head: integer
 * Return: 0
 */
stack_t *monty_stack_shift(stack_t **head)
{
	stack_t *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL)
	{
		node = *head;
		*head = NULL;
		node->next = NULL;
		node->prev = NULL;
	}
	else
	{
		stack_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		node = temp;
		node->prev->next = NULL;
		node->prev = NULL;
	}
	return (node);
}
