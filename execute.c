#include "monty.h"

/**
* f_execute - function executes opcode
* @stk: stack linked list
* @count: line counter
* @file: pointer to monty file
* @content: line content
* Return: none
*/
int f_execute(char *content, stack_t **stk, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", push_fun}, {"pall", pall_func}, {"pint", pint_func},
				{"pop", pop_func},
				{"swap", swap_func},
				{"add", add_func},
				{"nop", nop_func},
				{"sub", subtraction_func},
				{"div", divided_func},
				{"mul", multiplication_func},
				{"mod", modulos_func},
				{"pchar", print_char},
				{"pstr", print_string},
				{"rotl", rotl_func},
				{"rotr", rotr_func},
				{"queue", queue_func},
				{"stack", stack_func},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stk, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(content);
		stk_free(*stk);
		exit(EXIT_FAILURE); }
	return (1);
}
