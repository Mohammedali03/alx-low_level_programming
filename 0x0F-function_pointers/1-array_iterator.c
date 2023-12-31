#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of the array.
 * @array: the array
 * @size: size of array
 * @action: to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
