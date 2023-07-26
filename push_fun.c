#include "monty.h"

/**
 * push_fun - function adds node to stack
 * @hd: pointer of head to stack
 * @coun: line count
 * Return: nothing
 */
void push_fun(stack_t **hd, unsigned int coun)
{
	int num, a = 0, flg = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			a++;
		for (; bus.arg[a] != '\0'; a++)
		{
			if (bus.arg[a] > 57 || bus.arg[a] < 48)
				flg = 1; }
		if (flg == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", coun);
			fclose(bus.file);
			free(bus.content);
			stk_free(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", coun);
		fclose(bus.file);
		free(bus.content);
		stk_free(*hd);
		exit(EXIT_FAILURE); }
	num = atoi(bus.arg);
	if (bus.lifi == 0)
		node_add(hd, num);
	else
		add_queue(hd, num);
}
