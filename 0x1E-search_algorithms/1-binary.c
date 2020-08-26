#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in an array of integers using the
 * binary search algorithm
 * @array: pointer to firs index of array
 * @size: number of elements in array
 * @value: value to search
 * Return: the index where value is located
 * If value is not present in array or if array
 * is NULL, function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
        size_t mid = size / 2;

        if(mid %2 != 0 || mid > 1)
                mid--;

        // printf("size: ------------------------------------------------[%lu]\n", size); 
        printf("mid: [%lu] array[mid]: [%d]\n", mid, array[mid]);
        // printf("value: -----------------------------------------------[%d]\n", value);

        if(!array)
                return(-1);

        print_array(array, size);
        sleep(1);

        if (array[mid] == value)
                return (mid);
        if (value > array[mid])
                binary_search(&array[mid - 1], mid,  value); 
        else if (value < array[mid])
                binary_search(array, mid, value);
        return(-555555555);
}

/**
 * print_array - prints array given
 * @array: pointer to array
 * @size: cant elements of array
 * Return: none
 */
void print_array(int *array, size_t size)
{
        size_t idx = 0;

        printf("Searching in array: ");
        while (idx < size)
        {
                if (idx == size - 1)
                        printf("%d\n",array[idx]);
                else
                        printf("%d, ",array[idx]);
                idx++;
        }
}
