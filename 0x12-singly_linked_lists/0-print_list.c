#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements of list_t list
 * @h: pointer to list
 * Return: numer of nodes(on success),
 * print [0] (nil) if str is null
*/
size_t print_list(const list_t *h)
{
/** s will be used to count the num of nodes printed*/
size_t s = 0;
/**as long as h is not NULL*/
while (h)
{
/* code */
if (!h->str)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u]%s\n", h->len, h->str);
}
h = h->next;
s++;
}
return (s);
}
