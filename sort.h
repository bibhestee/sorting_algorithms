#ifndef SORT_H
#define SORT_H

/*------ Libraries ---------*/

#include <stdio.h>
#include <stdlib.h>

/*------ Structure --------*/

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


/*------- Function prototypes -----*/

/*-------Print functions------------*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*-------Sorting functions-----------*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
int partition(int *array, int start, int end, size_t size);
void sort(int *array, int start, int end, size_t size);
int check_sort(const int *array, size_t size);

#endif /*----- sort.h ----*/
