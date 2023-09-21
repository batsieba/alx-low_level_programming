#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node - adds a new node at the beginneing of a list
 * @head: the start of the node
 * @str: the string to be added at the beginning of node
 * Return: address of new element(on success),
 * return Null (on failure)
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;
while (str[len])
{
/* code */
len++;
}
new = malloc(sizeof(list_t));
if (!new)
{
return (NULL);
}
new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;
return (*head);
}
