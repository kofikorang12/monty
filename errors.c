#include "monty.h"
/**
 *malloc_error - error for malloc
 *Return: Nothing
 */
void malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}
/**
 *number_arguments_error - error for #arguments_
 *Return: Nothing
 */

void number_arguments_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 *unknown_ins - error for unknow instruction
 *Return: Nothing
 */
void unknown_ins(void)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
			info.line_number, *(info.arguments_[0]));
	free_all(1, 1, 1, 1, 1);
	exit(EXIT_FAILURE);
}
/**
 *file_error - error for file_error
 *@file: file that is read
 *Return: Nothing
 */

void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}

/**
 *add_error - error for malloc
 *Return: Nothing
 */
void add_error(void)
{
	fprintf(stderr, "L%d: can't add, stack too short\n", info.line_number);
	exit(EXIT_FAILURE);
}