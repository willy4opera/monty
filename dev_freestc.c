#include "monty.h"
/**
* dev_fr_stck - frees a doubly linked list
* @head: head of the stack
*/
void dev_fr_stck(stack_t *head)
{
	stack_t *auxil;

	auxil = head;
	while (head)
	{
		auxil = head->next;
		free(head);
		head = auxil;
	}
}
