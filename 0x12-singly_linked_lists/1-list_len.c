#include "lists.h"
#include <stdio.h>
/**
 * list_len - number of elements in list_t
 * @h: pointer to list
 * Return: number of elements in linked list list_t
 * Description: this function will return number of elements in a list
*/
size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
if (h->str)
{
h = h->next;
s++;
}
}
return (s);
}
