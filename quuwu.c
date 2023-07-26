#include "monty.h"

/**
 * queue_func - print 1st node of queue
 * @hd: 1st node of queue
 * @coun: line counter
 * Return: none
 */

void queue_func(stack_t **hd, unsigned int coun)
{
	(void)hd;
	(void)coun;

	bus.lifi = 1;
}

/**
 * add_queue - add node to end of queue
 * @n: new value
 * @hd: head of the queue
 * Return: nothing
 */
void add_queue(stack_t **hd, int n)
{
	stack_t *new_node, *tmp;

	tmp = *hd;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		printf("Error\n");

	new_node->n = n;
	new_node->next = NULL;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	if (!tmp)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		tmp->next = new_node;
		new_node->prev = tmp;
	}
}
