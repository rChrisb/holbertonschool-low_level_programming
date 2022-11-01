#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

typedef struct op add;
typedef struct op sub;
typedef struct op mul;
typedef struct op div;
typedef struct op mod;

strcpy(add.op, '+');
add.f = int op_add(int a, int b);

strcpy(sub.op, '-');
sub.f = int op_sub(int a, int b);

strcpy(mul.op, '*');
mul.f = int op_mul(int a, int b);

strcpy(div.op, '/');
div.f = int op_div(int a, int b);

strcpy(mod.op, '%');
mod.f = int op_mod(int a, int b);

#endif

