#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (!array)
	{
		return (-1);
	}

	printf("Searching in array: ");

	for (mid = 0; mid < size; mid++)
	{
		printf("%d, ", array[mid]);
	}
	printf("\n");

	while (low <= high)
	{
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;

		printf("Searching in array: ");
		for (mid = low; mid <= high; mid++)
			printf("%d, ", array[mid]);
		printf("\n");
	}

	return (-1);
}
