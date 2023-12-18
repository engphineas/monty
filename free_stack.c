#include "monty.h"
/**
* free_stack - function to free a doubly linked list
* @head: stack head pointer
*/
void free_stack(stack_t *head)
{
	stack_t *shift;

	shift = head;
	while (head)
	{
		shift = head->next;
		free(head);
		head = shift;
	}
}
