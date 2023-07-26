#include "monty.h"

/**
* node_add - function adds node to top in stack
* @hd: first node
* @n: new value
* Return: nothing
*/
void node_add(stack_t **hd, int n)
{
	stack_t *new_node, *tmp;

	tmp = *hd;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (tmp)
		tmp->prev = new_node;

	new_node->n = n;
	new_node->next = *hd;
	new_node->prev = NULL;
	*hd = new_node;
}
