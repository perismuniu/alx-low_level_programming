#include <stdio.h>

/**
 * advanced_binary - Searches for a value in a
 * sorted array of integers.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1
 * if not present or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int result;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");

	if (size == 1 && array[0] != value)
		return (-1);

	i = size / 2;
	if (array[i] == value)
	{
		if (i > 0 && array[i - 1] == value)
			return (advanced_binary(array, i, value));
		return (i);
	}

	if (array[i] < value)
	{
		result = advanced_binary(array + i + 1, size - i - 1, value);
		if (result == -1)
			return (-1);
		return (i + 1 + result);
	}
	return (advanced_binary(array, i, value));
}
