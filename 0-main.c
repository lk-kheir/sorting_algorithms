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
 //   int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    int array1[] = {1, 4, 6, 8};
    size_t n = sizeof(array1) / sizeof(array1[0]);

    print_array(array1, n);
    printf("\n");
    bubble_sort(array1, n);
    printf("\n");
    print_array(array1, n);
    return (0);
}
