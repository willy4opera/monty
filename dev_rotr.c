#include "monty.h"
/**
  *dev_rotr- rotates the stack to the bottom
  *@head: stack head
  *@cnter: line_number
  *Return: no return
 */
void dev_rotr(stack_t **head, __attribute__((unused)) unsigned int cnter)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
