#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* Swap the elements at start and end positions*/
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move the strat nd end positions towards the middle */
		start++;
		end--;
	}
}
