#include "search_algos.h"

/**
 * print_array - Print the array
 * @array: The array to print
 * @low: The low index
 * @high: The high index
 */
void print_array(int *array, size_t low, size_t high)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}
}

/**
 * binary_helper - helper for binary search
 * @array: The array
 * @low: Low index
 * @high: High index
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int binary_helper(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	print_array(array, low, high);

	if (array[mid] == value)
		return (mid);
	if (low == high)
		return (-1);
	if (value < array[mid])
		return (binary_helper(array, low, mid - 1, value));
	else
		return (binary_helper(array, mid + 1, high, value));
}

/**
 * binary_search - Binary Search algorithm
 * @array: The array to search through
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_helper(array, 0, size - 1, value));
}
