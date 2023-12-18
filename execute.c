#include "monty.h"
/**
* execute - function that executes the opcode
* @stack: head pointer to the stack
* @count: count line
* @file: pointer to the monty file
* @content: content of the line
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t opst[] = {
				{"push", push}, {"pall", pall}, {"pint", pint},
				{"pop", pop},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", div_f},
				{"mul", mul},
				{"mod", mod},
				{"queue", queue_f},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *ops;

	ops = strtok(content, " \n\t");
	if (ops && ops[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[j].opcode && ops)
	{
		if (strcmp(ops, opst[j].opcode) == 0)
		{	opst[j].f(stack, count);
			return (0);
		}
		j++;
	}
	if (ops && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, ops);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
