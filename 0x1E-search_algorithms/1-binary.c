#include "search_algos.h"
/**
 * printarr - prints the elemnts of integers array
 * @arr: pointer to the array first element
 * @endindex: the index of the last element
 *
 * Return: void always
 */

void printarr(int *arr, size_t endindex)
{
	int *ptr = arr;
	int *end = arr + endindex;

	printf("Searching in array: ");
	while (ptr <= end)
	{
		printf("%d", *ptr);
		if (ptr < end)
			printf(", ");
		ptr++;
	}
		printf("\n");

}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 *
 * @array: sorted array of integers
 * @size: array size
 * @value: the value to search for
 *
 * Return: the value index  on success or -1 if array is NULL or
 * the value not found
 */

int binary_search(int *array, size_t size, int value)
{
	int endindex = size - 1;
	int leftend = endindex / 2;
	int index = leftend;
	int ret = 0;

	if (size <= 0 || array == NULL)
		return (-1);
	printarr(array, endindex);
	if (value == *(array + leftend))
		index = leftend;
	else if (value < *(array + leftend))
	{
		ret = binary_search(array, leftend, value);
		index = ret == -1 ? -1 : index - ret;
	}
	else
	{
		leftend++;
		index++;
		size = size - leftend;
		ret = binary_search((array + leftend), size, value);
		index = ret == -1 ? -1 : index + ret;
	}
	return (index);
}
