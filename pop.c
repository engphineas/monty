#include "monty.h"
/**
 * pop - functions that prints the top element
 * @head: stack head pointer
 * @count: number line
 * Return: no return
*/
void pop(stack_t **head, unsigned int count)
{
	stack_t *h_ptr;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h_ptr = *head;
	*head = h_ptr->next;
	free(h_ptr);
}
