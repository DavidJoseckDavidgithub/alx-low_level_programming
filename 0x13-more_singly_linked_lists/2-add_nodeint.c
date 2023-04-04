#include "lists.h"

/**
 * add_nodeint - adds new line to the beginning of a linked list1
 * @head: head of a list
 * @n: n element
 *
 * Return: address of the new element. NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (*head);
}
