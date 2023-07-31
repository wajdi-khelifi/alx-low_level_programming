#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precedent, *next;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	precedent = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = precedent;
		precedent = *head;
		*head = next;
	}
	*head = precedent;
	return (*head);
}

