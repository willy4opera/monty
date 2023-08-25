#ifndef H_MONTY
#define H_MONTY
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct dev_bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct dev_bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  dev_bus_t;
extern dev_bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void dev_push(stack_t **head, unsigned int number);
void dev_pall(stack_t **head, unsigned int number);
void dev_pint(stack_t **head, unsigned int number);
int dev_exec(char *content, stack_t **head, unsigned int cnter, FILE *file);
void dev_fr_stck(stack_t *head);
void dev_pop(stack_t **head, unsigned int cnter);
void dev_swp(stack_t **head, unsigned int cnter);
void dev_add(stack_t **head, unsigned int cnter);
void dev_nop(stack_t **head, unsigned int cnter);
void dev_sub(stack_t **head, unsigned int cnter);
void dev_div(stack_t **head, unsigned int cnter);
void dev_mul(stack_t **head, unsigned int cnter);
void dev_mod(stack_t **head, unsigned int cnter);
void dev_pchar(stack_t **head, unsigned int cnter);
void dev_pstr(stack_t **head, unsigned int cnter);
void dev_rotl(stack_t **head, unsigned int cnter);
void dev_rotr(stack_t **head, __attribute__((unused)) unsigned int cnter);
void dev_addnd(stack_t **head, int n);
void dev_addQ(stack_t **head, int n);
void dev_queue(stack_t **head, unsigned int cnter);
void dev_stack(stack_t **head, unsigned int cnter);
#endif
