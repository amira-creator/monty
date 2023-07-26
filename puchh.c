#include "monty.h"
/**
 * Apush - add node to the stack
 * @h: stack head
 * @conter: line_number
 * Return: no return
*/
void Apush(stack_t **h, unsigned int conter)
{
	int a, k = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", conter);
			fclose(bus.file);
			free(bus.content);
			stack_f(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", conter);
		fclose(bus.file);
		free(bus.content);
		stack_f(*h);
		exit(EXIT_FAILURE); }
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		node_add(h, a);
	else
		node_add(h, a);
}
