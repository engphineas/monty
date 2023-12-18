#include "monty.h"
/**
  *sub- function sustrats top element from second top element
  *@head: stack head pointer
  *@count: number line
  *Return: no return
 */
void sub(stack_t **head, unsigned int count)
{
	stack_t *shift;
	int subtract, num_nodes;

	shift = *head;
	for (num_nodes = 0; shift != NULL; num_nodes++)
		shift = shift->next;
	if (num_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	shift = *head;
	subtract = shift->next->n - shift->n;
	shift->next->n = subtract;
	*head = shift->next;
	free(shift);
}
