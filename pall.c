#include "monty.h"
/**
 * pall - function that prints the stack from top
 * @head: head of the stack
 * @count: line counter
 * Return: no return
*/
void pall(stack_t **head, unsigned int count)
{
	stack_t *h_ptr;
	(void)count;

	h_ptr = *head;
	if (h_ptr == NULL)
		return;
	while (h_ptr)
	{
		printf("%d\n", h_ptr->n);
		h_ptr = h_ptr->next;
	}
}
