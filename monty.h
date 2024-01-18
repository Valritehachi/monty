#ifndef MONTY_H
#define MONTY_H

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

typedef void (*MontyFunction)(stack_t **stack, char *arg, unsigned int line_number);

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        MontyFunction f;
} instruction_t;

int monty_read_line(FILE *file, char *op, char *param);
int monty_process_file(char *filename);
int  monty_read_command(char *line, char *op, char *param);
void monty_push(stack_t **stack, char *arg, unsigned int line_number);
void monty_pall(stack_t **stack, char *arg, unsigned int line_number);
stack_t *monty_stack_pop(stack_t **head);
stack_t *monty_stack_push(stack_t **h, int n);
MontyFunction monty_get_function(char *op);
int _strcmp(const char *s1, const char *s2);
void monty_stack_free(stack_t *head);
void monty_pint(stack_t **stack, char *arg, unsigned int line_number);
void monty_pop(stack_t **stack, char *arg, unsigned int line_number);
void monty_swap(stack_t **stack, char *arg, unsigned int line_number);
void monty_add(stack_t **stack, char *arg, unsigned int line_number);
void monty_sub(stack_t **stack, char *arg, unsigned int line_number);
void monty_div(stack_t **stack, char *arg, unsigned int line_number);
void monty_mul(stack_t **stack, char *arg, unsigned int line_number);
void monty_mod(stack_t **stack, char *arg, unsigned int line_number);
void monty_nop(stack_t **stack, char *arg, unsigned int line_number);
void monty_pchar(stack_t **stack, char *arg, unsigned int line_number);
void monty_pstr(stack_t **stack, char *arg, unsigned int line_number);
void monty_rotl(stack_t **stack, char *arg, unsigned int line_number);
void monty_rotr(stack_t **stack, char *arg, unsigned int line_number);
stack_t *monty_stack_shift(stack_t **head);
stack_t *monty_stack_append(stack_t **head, const int n);
int monty_get_mode(void);
void monty_set_mode(int mode);
FILE *monty_get_file(void);
void monty_set_file(FILE *file);
void monty_close_file(void);
void monty_free_stack(void);
void monty_cleanup(void);


#endif
