#ifndef CALC_H
#define CALC_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 * @op: the operator
 * @f: the function to be called
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};

/**
 * typedef op_t - typedef for struct op
 */
typedef struct op op_t;

#endif /*CALC_H*/
