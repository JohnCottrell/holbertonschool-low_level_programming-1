#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @next: Pointer to the next element of the list
 * @prev: Pointer to the prev element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


listint_t *create_listint(const int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);

listint_t *from_index(listint_t **list, unsigned int index);
unsigned int list_swap(listint_t **list, unsigned int index);
unsigned int rev_list(listint_t **list);
unsigned int list_length(listint_t **list);

/* Quicksort Stuff */
void qs(int *array, size_t size, int start, int end);
int partition(int *array, size_t size, int pivot, int end);
void swap(int *array, size_t size, int i, int j);
#endif
