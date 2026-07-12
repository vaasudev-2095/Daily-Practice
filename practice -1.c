/// Implement 3-Way Quick Sort (Dutch National Flag partition) to efficiently sort an array containing many duplicate values.
/**
  n = 10
  a[] = {4 ,5 ,4 ,3 ,4 ,2 ,5 ,1 ,4 ,3}
*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void partition(int arr[], int l, int r, int *i, int *j)
{
    *i = l - 1;
    *j = r;

    int p = l - 1;
    int q = r;
    int v = arr[r];

    while (1)
    {
        while (arr[++(*i)] < v);

        while (v < arr[--(*j)])
        {
            if (*j == l)
                break;
        }

        if (*i >= *j)
            break;

        swap(&arr[*i], &arr[*j]);

        if (arr[*i] == v)
        {
            p++;
            swap(&arr[p], &arr[*i]);
        }

        if (arr[*j] == v)
        {
            q--;
            swap(&arr[*j], &arr[q]);
        }
    }

    swap(&arr[*i], &arr[r]);

    *j = *i - 1;
    for (int k = l; k < p; k++, (*j)--)
        swap(&arr[k], &arr[*j]);

    *i = *i + 1;
    for (int k = r - 1; k > q; k--, (*i)++)
        swap(&arr[*i], &arr[k]);
}

void quicksort(int arr[], int l, int r)
{
    if (r <= l)
        return;

    int i, j;

    partition(arr, l, r, &i, &j);

    quicksort(arr, l, j);
    quicksort(arr, i, r);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {4 ,5 ,4 ,3 ,4 ,2 ,5 ,1 ,4 ,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n);

    quicksort(arr, 0, n - 1);

    printf("Sorted Array:\n");
    printArray(arr, n);

    return 0;
}
