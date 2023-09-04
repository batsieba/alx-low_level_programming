#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 followed by s2(on success), NULL(on failure)
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int a, b, i, j;

if (s1 == NULL)/**if null is passed, treat it as an empty string*/
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
a = 0;/**a is the size of s1*/
while (s1[a] != '\0')
{
a++;
}
b = 0;/**b is the size of s2*/
while (s2[b] != '\0')
{
b++;
}
/**assign result a loc with the size of both words*/
result = malloc(sizeof(char) * (a + b + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; i < a; i++)/**add the first string to the result*/
{
result[i] = s1[i];
}
for (j = 0; j < b; j++)/**add the second string to the result*/
{
result[i] += s2[j];
i++;
}
result[i] = '\0';
return (result);
}
