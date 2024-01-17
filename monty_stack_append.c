#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * monty_stack_append - doubly linked list
 * @n: integer
 * @head: integer
 * Return: 0
 */
stack_t *monty_stack_append(stack_t **head, const int n)
{
	stack_t *node;

	if (head == NULL)
	{
		return (NULL);
	}

	node = (stack_t *)malloc(sizeof(stack_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		node->n  = n;
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	else
	{
		stack_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		node->n = n;
		node->next = NULL;
		node->prev = temp;
		temp->next = node;
	}
	return (node);
}
