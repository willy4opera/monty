#include "monty.h"
/**
 * dev_queue - prints the top
 * @head: stack head
 * @cnter: line_number
 * Return: no return
*/
void dev_queue(stack_t **head, unsigned int cnter)
{
	(void)head;
	(void)cnter;
	bus.lifi = 1;
}

/**
 * dev_addQ - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void dev_addQ(stack_t **head, int n)
{
	stack_t *nw_nd, *auxil;

	auxil = *head;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{
		printf("Error\n");
	}
	nw_nd->n = n;
	nw_nd->next = NULL;
	if (auxil)
	{
		while (auxil->next)
			auxil = auxil->next;
	}
	if (!auxil)
	{
		*head = nw_nd;
		nw_nd->prev = NULL;
	}
	else
	{
		auxil->next = nw_nd;
		nw_nd->prev = auxil;
	}
}
