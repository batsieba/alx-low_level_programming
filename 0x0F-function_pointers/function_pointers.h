#ifdef FUNCTION_POINTERS_H
#define FUNCTION_POINTRS_H
#include <stddef.h>
#include <stdlib.h>

void print_name(char *name,void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array,size-t size,void (*action)(int));
int int_index(int *array,int size,int (*cmp)(int));

#endif