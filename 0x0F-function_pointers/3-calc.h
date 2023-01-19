#ifndef CALC_H
#define CALC_H

/*
 * File: 3-calc.h
 * Description: Header file.
 */

/**
 * struct op - A struct op.
 * @op: operator.
 * @f: function.
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} opt_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
