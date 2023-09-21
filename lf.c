#include "monty.h"

/**
 * ps - add node at first
 * @head: pinter to head of list
 * @n: value of the elment
 * Return: new head
*/
stack_t *ps(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}

/**
 * pq - adds node at the end
 * @head: head
 * @n: value
 * Return: new list
*/
stack_t *pq(stack_t **head, int n)
{
	stack_t *tmp, *reset = *head, *new = malloc(sizeof(stack_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
	}
	tmp->next = new;
	new->prev = tmp;
	*head = reset;
	return (*head);
}

/**
 * fd - frees a list.
 * @head: head
*/
void fd(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
