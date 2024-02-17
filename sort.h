#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void quick_sort(int *array, size_t size);
void swap_(listint_t *y, listint_t *z);
void cocktail_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
/*help functions*/
void update_list(listint_t **list);
void print_list1(listint_t *list);
void merge_sort(int *array, size_t size);
void swap(int *a, int *b);
void print_array1(int *array, int lb, int size);
#endif /*sort*/
