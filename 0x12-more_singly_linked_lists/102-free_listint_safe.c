#include "lists.h"

/**
 * free_listint_safe - frees memory allocated for a listint_t structure
 * and sets head to NULL, safe for looped structs
 *
 * @h: head for listint_t struct
 */
size_t free_listint_safe(listint_t **h)
{
	listptr_t *ptrhead, *ptrwalk;
	listint_t *tmp, *walk;
	int i, brake;

	if (h == NULL)
		return (0);
	walk = *h;
	ptrhead = ptrwalk = NULL;
	i = brake = 0;
	while (walk != NULL)
	{
		ptrwalk = ptrhead;
		while (ptrwalk != NULL)
		{
			if (ptrwalk->list == walk->next)
			{
				free(walk);
				free_ptr(ptrhead);
				brake = 1;
				break;
			}
			ptrwalk = ptrwalk->next;
		}
		if (brake == 1)
		{
			break;
		}
		tmp = walk;
		add_ptr(&ptrhead, walk);
		walk = walk->next;
		free(tmp);
		i++;
	}
	*h = NULL;
	free_ptr(ptrhead);
	return (i);
}
