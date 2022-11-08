#include "sort.h"

// bubble_sort - sorts an array of integers
// @array: the array to be sorted
// @size: the size of the array
// Return: void 

void bubble_sort(int *array, size_t size)
{
    size_t counter1, counter2;
    int temp_swap, flag = 0;

    if (array == NUll || size == 0)
    {
        return;
    }

    for (counter1 = 0; counter1 < size - 1; counter1++)
    {
        for (counter2 = 0; counter2< size - counter1 - 1; counter2++)
        {
            if(array[counter2] > array[counter2 + 1])
            {
                temp_swap = array[counter2];
                array[counter2] = array[counter2 + 1];
                array[counter2 + 1] = temp_swap;

                print_array(array, size);
                flag = 1; 
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}