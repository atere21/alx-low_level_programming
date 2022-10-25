#include lists.h

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

 (NULL);

while (slow && fast && fast->next)
{
= fast->next->next;
= slow->next;
(fast == slow)
= head;
(slow != fast)
= slow->next;
= fast->next;
 (fast);

return (NULL);
}
