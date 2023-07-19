#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - returns a pointer to func that corresponds to operator
 *
 * @s: operator
 * 
 * Return: func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (op[i].f != NULL)
	{
		if (*s == *(op[i].op) && s[1] == '\0')
			return (op[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
