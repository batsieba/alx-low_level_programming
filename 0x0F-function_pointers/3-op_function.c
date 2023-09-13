#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns sum of 2 numbers
 * @a: first entry
 * @b: second entry
 * Return: sum of a and b
*/
int op_add(int a, int b)
{
    return (a + b);
}
/**
 * op_sub - Returns subtraction of 2 numbers
 * @a: first entry
 * @b: second entry
 * Return: subtraction of a and b
*/
int op_sub(int a, int b)
{
    return (a - b);
}
/**
 * op_mul - Returns multiplication of 2 numbers
 * @a: first entry
 * @b: second entry
 * Return: multiplication of a and b
*/
int op_mul(int a, int b)
{
    return (a * b);
}
/**
 * op_div - Returns division of 2 numbers
 * @a: first entry
 * @b: second entry
 * Return: division of a and b
*/
int op_div(int a, int b)
{
    return (a / b);
}
/**
 * op_mod - Returns sum of 2 numbers
 * @a: first entry
 * @b: second entry
 * Return: modulus of a and b
*/
int op_mod(int a, int b)
{
    return (a % b);
}