#include "monty.h"
/**
 * swap - function that swaps the top two elements of the stack.
 * @head: stack head pointer
 * @count: number line
 * Return: no return
*/
void swap(stack_t **head, unsigned int count)
{
	stack_t *h_ptr;
	int length = 0, shift;

	h_ptr = *head;
	while (h_ptr)
	{
		h_ptr = h_ptr->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h_ptr = *head;
	shift = h_ptr->n;
	h_ptr->n = h_ptr->next->n;
	h_ptr->next->n = shift;
}
