#include "monty.h"
/**
 * node_add - add node to the head stack
 * @h: head of the stack
 * @num: new_value
 * Return: no return
*/
void node_add(stack_t **h, int num)
{

	stack_t *new_node, *ax;

	ax = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ax)
		ax->prev = new_node;
	new_node->n = num;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}
