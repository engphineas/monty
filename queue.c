#include "monty.h"
/**
 * queue_f - function that prints the top
 * @head: stack head pointer
 * @count: number line
 * Return: no return
*/
void queue_f(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - funtion that adds node to the tail stack
 * @n: new value
 * @head: head pointer to the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *shift;

	shift = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (shift)
	{
		while (shift->next)
			shift = shift->next;
	}
	if (!shift)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		shift->next = new_node;
		new_node->prev = shift;
	}
}
