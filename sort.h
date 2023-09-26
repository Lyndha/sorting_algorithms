#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


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
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swap(listint_t **list, listint_t *node);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void TDSplitMerge(size_t start, size_t end, int *array, int *copy);
void TDMerge(size_t start, size_t middle, size_t end, int *dest, int *source);
void heap_sort(int *array, size_t size);
void make_heap(int *array, size_t size);
void sift_down(int *array, size_t root, size_t end, size_t size);
void radix_sort(int *array, size_t size);
unsigned int count_sort(int *array, size_t size, unsigned int digit);
unsigned int pow_10(unsigned int power);
void bitonic_compare(char up, int *array, size_t size);
void bitonic_merge(char up, int *array, size_t size);
void bit_sort(char up, int *array, size_t size, size_t t);
void bitonic_sort(int *array, size_t size);
size_t partition(int *array, ssize_t lo, ssize_t hi, size_t size);
void quicksort(int *array, ssize_t lo, ssize_t hi, size_t size);
void quick_sort_hoare(int *array, size_t size);
void sort_deck(deck_node_t **deck);
void swap_node(deck_node_t **list, deck_node_t *node);
int get_val(const char *str);

#endif
