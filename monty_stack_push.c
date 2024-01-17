#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * alloc_node- doubly linked list
 * @next: integer
 * @prev: integer
 * @n: integer
 * Return: 0
 */
stack_t *alloc_node(int n, stack_t *next, stack_t *prev)
{
	stack_t *node;

	node = (stack_t *)malloc(sizeof(stack_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = next;
	if (next != NULL)
	{
		next->prev = node;
	}
	node->prev = prev;
	if (prev != NULL)
	{
		prev->next = node;
	}
	return (node);
}

/**
 * monty_stack_push- doubly linked list
 * @h: integer
 * @n: integer
 * Return: 0
 */
stack_t *monty_stack_push(stack_t **h, int n)
{
	stack_t *node;

	if (h == NULL)
	{
		return (NULL);
	}
	node = alloc_node(n, *h, NULL);

	*h = node;

	return (node);
}
