#include "monty.h"
/**
 * division - function divides the top two elements of the stack.
 * @head: head pointer to the stack
 * @count: line counter
 * Return: no return
*/
void division(stack_t **head, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h_ptr = *head;
	if (h_ptr->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	shift = h_ptr->next->n / h_ptr->n;
	h_ptr->next->n = shift;
	*head = h_ptr->next;
	free(h_ptr);
}
