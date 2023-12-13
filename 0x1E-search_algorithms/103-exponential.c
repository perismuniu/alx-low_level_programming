#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t i = 1;
    size_t j;

    if (!array)
        return (-1);

    while (i < size && array[i] <= value)
    {
	    printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	    i *= 2;
    }

    if (i >= size)
        return (-1);

    printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i - 1);
    printf("Searching in array: ");
    for (j = i / 2; j <= i - 1 && j < size; j++)
        printf("%d%s", array[j], (j < i - 1 && j < size - 1) ? ", " : "\n");

    return (bin_search(array, i / 2, i, value));
}

/**
 * binary_search - Searches for a value in a sorted array using Binary Search algorithm
 * @array: Pointer to the first element of the array
 * @start: Starting index
 * @end: Ending index
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int bin_search(int *array, size_t start, size_t end, int value)
{
    size_t left = start, right = end - 1, mid;

    while (left <= right)
    {
        print_array(array, left, right);

        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid); /* Value found, return the index */

        if (array[mid] < value)
            left = mid + 1; /* Adjust left bound for the right subarray */
        else
            right = mid - 1; /* Adjust right bound for the left subarray */
    }

    return (-1); /* Value not found */
}

/**
 * print_array - Prints the elements of an array between two indices
 * @array: Pointer to the first element of the array
 * @start: Starting index
 * @end: Ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;
    printf("Searching in array: ");
    for (i = start; i <= end && i < end; i++)
    {
        printf("%d, ", array[i]);
        
    }
    printf("%d\n", array[end]);

}
