#include "lists.h"

/**
 * free_listint_safe - frees memory allocated for a listint_t structure
 * and sets head to NULL, safe for looped structs
 *
 * @h: head for listint_t struct
 * Return: returns number of nodes in list_t
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *ptrhead, *ptrwalk;
	listint_t *tmp, *walk;
	int i;

	walk = *h;
	if (walk == NULL)
		return (0);
	if (walk->next == NULL)
	{
		free(walk);
		return (1);
	}
	ptrhead = NULL;
	i = 0;
	while (walk != NULL)
	{
		ptrwalk = ptrhead;
		while (ptrwalk != NULL)
		{
			if (ptrwalk->list == walk)
			{
				free_ptr(ptrhead);
				*h = NULL;
				return (i);
			}
			ptrwalk = ptrwalk->next;
		}
		add_ptr(&ptrhead, walk);
		tmp = walk;
		free(tmp);
		walk = walk->next;
		i++;
	}
	if (ptrhead != NULL)
	{
		free_ptr(ptrhead);
		ptrhead = NULL;
	}
	*h = NULL;
	return (i);
}
