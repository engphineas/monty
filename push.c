#include "monty.h"
/**
 * push - function pushes/ addan element node to the stack
 * @head: stack head pointer
 * @count: number line
 * Return: no return
*/
void push(stack_t **head, unsigned int count)
{
	int m, i = 0, watch = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				watch = 1; }
		if (watch == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	m = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, m);
	else
		addqueue(head, m);
}
