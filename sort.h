#ifndef SORT
#define SORT

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
int partition(int *A, ssize_t lo, ssize_t hi, size_t size);
void quicksort(int *array, ssize_t start, ssize_t next, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *n1, int *n2);
#endif
