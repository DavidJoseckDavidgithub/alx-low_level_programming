#include "lists.h"

/**
 * get_nodeingt_at_index - returns the nth node of a linked list
 * @head: head of list
 * @index: index of the node
 *
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int b;

for (b = 0; b < index; b++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
