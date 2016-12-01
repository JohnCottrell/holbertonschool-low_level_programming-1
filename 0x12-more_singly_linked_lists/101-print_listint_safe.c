#include "lists.h"

/**
 * print_listint_safe - prints a listint, can handle looped lists
 *
 * @head: head pointer for list
 * Return: Returns number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	listptr_t *ptrhead, *walk;
	int i;

	ptrhead = NULL;
	i = 0;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		ptrhead = add_ptr(&ptrhead, head);
		walk = ptrhead;
		while (walk != NULL)
		{
			if (walk->list == head->next)
			{
				head = head->next;
				free_ptr(ptrhead);
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (i);
			}
			walk = walk->next;
		}
		head = head->next;
	}
	free_ptr(ptrhead);
	return (i);
}

/**
 * add_ptr - adds a node to the beginning of a listptr_t
 *
 * @head: head for listptr_t struct
 * @ptr: ptr to add address of
 * Return: returns address of new node
 */
listptr_t *add_ptr(listptr_t **head, const listint_t *ptr)
{
	listptr_t *new;

	new = malloc(sizeof(listptr_t));
	if (new == NULL)
	{
		free_ptr(*head);
		exit(98);
	}
	new->list = ptr;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * free_ptr - frees memory allocated for a listptr
 *
 * @head: head for listptr_t struct
 */
void free_ptr(listptr_t *head)
{
	listptr_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
