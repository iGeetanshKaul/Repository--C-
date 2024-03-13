#include <stdio.h>
#include "arrays.h"
#include <stdlib.h>

void ArraysIntReverse(int *arr, int length)
{
    for (int i = 0; i < (length - 1) / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + length - 1 - i);
        *(arr + length - 1 - i) = temp;
    }
}

void ArraysIntPrint(int *arr, int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%i", *(arr + i));
        }
        else
            printf("%i, ", *(arr + i));
    }
    printf("]");
    printf("\n");
}

void ArraysIntRandomize(int *arr, int length)
{
    // randomizing(shuffling) 3 times the length of the array
    for (int i = 0; i < length * 3; i++)
    {
        int first = rand() % 10 - (length - 10) - 1;
        int second = rand() % 10 - (length - 10) - 1;

        // swap the numbers
        int temp = *(arr + first);
        *(arr + first) = *(arr + second);
        *(arr + second) = temp;
    }
}

void ArraysCharPrint(char *arr, int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%c", *(arr + i));
        }
        else
            printf("%c, ", *(arr + i));
    }
    printf("]");
    printf("\n");
}

void ArraysFloatPrint(float *arr, int length)
{
    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%f", *(arr + i));
        }
        else
            printf("%f, ", *(arr + i));
    }
    printf("]");
    printf("\n");
}
