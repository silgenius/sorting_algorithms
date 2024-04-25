#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    int array_1[] = {19};
    int array_2[] = {48, 19};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);

    n = sizeof(array_1) / sizeof(array_1[0]);

    print_array(array_1, n);
    printf("\n");
    bubble_sort(array_1, n);
    printf("\n");
    print_array(array_1, n);

    n = sizeof(array_2) / sizeof(array_2[0]);

    print_array(array_2, n);
    printf("\n");
    bubble_sort(array_2, n);
    printf("\n");
    print_array(array_2, n);
    return (0);
}
