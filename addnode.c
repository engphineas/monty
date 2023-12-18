#include "monty.h"
/**
 * addnode - function that adds node to the head stack
 * @head: head pointer to the stack
 * @n: new value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *shift;

	shift = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (shift)
		shift->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
