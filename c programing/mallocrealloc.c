#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr, n, newsize, i;

    // Fixed typo in printf
    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));

    // Fixed NULL check (== instead of = and removed semicolon)
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d element(s):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Display array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the new size of the array: ");
    scanf("%d", &newsize);

    arr = (int *)realloc(arr, newsize * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed\n");
        return 2;
    }

    // Initialize new elements to 0 if newsize > n
    if (newsize > n)
    {
        for (i = n; i < newsize; i++)
        {
            arr[i] = 0;
        }
    }

    printf("Resized array:\n");
    for (i = 0; i < newsize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    printf("Memory released successfully\n");

    return 0;
}

