#include "monty.h"
/**
 * pint - function that prints the top element
 * @head: stack head pointer
 * @count: number line
 * Return: no return
*/
void pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
