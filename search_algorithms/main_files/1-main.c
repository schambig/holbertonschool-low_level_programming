#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}

/**
 * main_0.c - case: Find a value with only one occurrence in the array
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[17] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48, 89
	};
	printf("Found at index: %d\n", binary_search(array, 16, 12));
	return (0);
}

/**
 * main_1.c - case: Find a value which is not in the array
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[17] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48, 89
	};
	printf("Found at index: %d\n", binary_search(array, 16, 123456789));
	return (0);
}

/**
 * main_2.c - case: Find a value which is in the array, but outside the specified range
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[17] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 25, 48, 89
	};
	printf("Found at index: %d\n", binary_search(array, 10, 13));
	return (0);
}

/**
 * main_3.c - case: binary_search(NULL, 0, 0);
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Found at index: %d\n", binary_search(NULL, 0, 0));
	return (0);
}
