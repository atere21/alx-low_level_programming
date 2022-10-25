#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *temp;

(0);

while (*h)
{
= *h - (*h)->next;
(diff > 0)
= (*h)->next;
= temp;
++;
= NULL;
++;

*h = NULL;

return (len);
}
