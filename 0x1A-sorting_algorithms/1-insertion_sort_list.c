#include "sort.h"


unsigned int rev_list(listint_t **list);
listint_t *from_index(listint_t **list, unsigned int index);
unsigned int list_swap(listint_t **list, unsigned int index);

void insertion_sort_list(listint_t **list)
{
	listint_t *walk;
	unsigned int i;

	for (i = 1;walk;i++)
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
