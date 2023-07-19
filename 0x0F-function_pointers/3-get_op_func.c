#include "3-calc.h"
/**
  * get_op_func - selects correct function
  * to perform the operation
  * @s: operator
  * Return: return function pointer to suitable function
  */
int (*get_op_func(char *s))(int, int)
{
	opt_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op != *s))
		i++;
	return (op[i].f);
}
