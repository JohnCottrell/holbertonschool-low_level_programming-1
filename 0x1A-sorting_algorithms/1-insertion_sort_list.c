#include "sort.h"

/**
 * insertion_sort_list - insertion sorts a list
 * @list: head of list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *walk;
	unsigned int i;

	if (!list || !(*list))
		return;
	length = listint_len(*list);
	if (list_length(list) <= 1)
		return;
	for (i = 1; walk; i++)
	{
		walk = from_index(list, i);
		if (walk && walk->n < (walk->prev)->n)
		{
			list_swap(list, i);
			print_list(*list);
			i = 0;
		}
	}
}

/**
 * from_index - grabs a node at a specific index
 * @list: list to grab from
 * @index: index to grab at
 * Return: returns a pointer to the node specified
 */
listint_t *from_index(listint_t **list, unsigned int index)
{
	listint_t *walk;
	unsigned int i;

	walk = *list;
	for (i = 0; walk != NULL && i != index; i++)
	{
		walk = walk->next;
	}
	return (walk);
}

/**
 * list_swap - swaps a node with the previous node
 * @list: list to work from
 * @index: index to swap at
 * Return: returns 1 on success
 */
unsigned int list_swap(listint_t **list, unsigned int index)
{
	listint_t *at_index, *walk;

	at_index = from_index(list, index);
	walk = at_index->prev;

	walk->next = at_index->next;
	at_index->prev = walk->prev;
	walk->prev = at_index;
	at_index->next = walk;
	if (at_index->prev != NULL)
		(at_index->prev)->next = at_index;
	if (walk->next != NULL)
		(walk->next)->prev = walk;
	if (index == 1)
	{
		*list = at_index;
	}
	return (1);
}

/**
 * list_length - returns length of a linked list
 * @list: head of list
 * Return: Returns length of linked list
 */
unsigned int list_length(listint_t **list)
{
	listint_t *walk;
	unsigned int i;

	walk = *list;

	i = 0;
	while (walk != NULL)
	{
		i++;
		walk = walk->next;
	}
	return (i);
}

/**
 * rev_list - prints a list backwards, for testing
 * @list: head of list
 * Return: 1 on success
 */
unsigned int rev_list(listint_t **list)
{
	listint_t *walk;

	walk = *list;
	while (walk->next != NULL)
		walk = walk->next;
	while (walk != NULL)
	{
		printf("%d, ", walk->n);
		walk = walk->prev;
	}
	return (1);
}
