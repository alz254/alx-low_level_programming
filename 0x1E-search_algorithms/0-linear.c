#include "search_algos.h"
/**
 * linear_search -searches for value in array
 *
 * @array: is a pointer to the first element pf thee array
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
