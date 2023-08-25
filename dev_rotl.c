#include "monty.h"
/**
  *dev_rotl- rotates the stack to the top
  *@head: stack head
  *@cnter: line_number
  *Return: no return
 */
void dev_rotl(stack_t **head,  __attribute__((unused)) unsigned int cnter)
{
	stack_t *temp = *head, *auxil;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxil = (*head)->next;
	auxil->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxil;
}
