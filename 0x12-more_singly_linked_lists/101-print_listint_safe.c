#include "lists.h"

/**
 * print_listint_safe - prints a listint, can handle looped lists
 *
 * @head: head pointer for list
 * Return: Returns number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *slowwalk, *fastwalk;
	int i, passed;

	if (head == NULL)
		return (98);
	i = passed = 0;
	fastwalk = slowwalk = head->next;
	while (slowwalk != NULL && fastwalk != NULL && fastwalk->next != NULL)
	{
		slowwalk = slowwalk->next;
		fastwalk = fastwalk->next->next;
		if (slowwalk == fastwalk)
		{
			passed = 1;
			break;
		}
	}
	if (passed == 1)
	{
		slowwalk = findloop(head, fastwalk);
		passed = 0;
	}
	else
		slowwalk = NULL;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		i++;
		if (slowwalk == head)
		{
			printf("-> [%p] %d\n", (void *) head->next, head->next->n);
			break;
		}
		head = head->next;
	}
	return (i);
}

/**
 * findloop - finds the looped node in a linked list
 *
 * @head: head pointer for list
 * @loop: any known looping node
 * Return: Returns end of list
 */
listint_t *findloop(const listint_t *head, listint_t *loop)
{
	listint_t *walker, *crawler;

	walker = head->next;
	crawler = NULL;
	while (walker != crawler)
	{
		crawler = walker->next;
		while (crawler != NULL && crawler != walker && crawler != loop)
		{
			if (crawler->next == walker)
				return (crawler);
			crawler = crawler->next;
		}
		walker = walker->next;
	}
	return (walker);
}
