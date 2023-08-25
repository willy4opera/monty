#include "monty.h"
/**
 * dev_addnd - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void dev_addnd(stack_t **head, int n)
{

	stack_t *nw_nd, *auxil;

	auxil = *head;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxil)
		auxil->prev = nw_nd;
	nw_nd->n = n;
	nw_nd->next = *head;
	nw_nd->prev = NULL;
	*head = nw_nd;
}
