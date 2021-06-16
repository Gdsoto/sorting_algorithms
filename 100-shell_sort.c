#include "sort.h"

/**
 * shell_sort - sorts an array on ascending order
 * @array: List of integers
 * @size: Lenght of the array
 * Return: None
 */

void shell_sort(int *array, size_t size)
{
	size_t x, y, i = 1;
	int temp;

	if (size < 2)
		return;
	while (i < size)
		i = i * 3 + 1;
	i = (i - 1) / 3;
	for (; i > 0; i = (i - 1) / 3)
	{
		for (x = i; x < size; x++)
		{
			temp = array[x];
			for (y = x; y >= i && array[y - i] > temp; y = y - i)
				array[y] = array[y - i];
			array[y] = temp;
		}
		print_array(array, size);
	}
}
