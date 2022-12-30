#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main()
{
    int array[MAX], size, i;
restart:
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    if (size <= 0)
    {
        printf("Please enter a positive integer for size!\n");
        goto restart;
    }
    printf("Enter the elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int j;
    for (i = 0; i < size; i++)
    {
        for (j = 1; j < size - i; j++)
        {
            if (array[j - 1] > array[j])
            {
                int temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }
    }

    printf("Sorted array (small to large): ");
    for (i = 0; i < size - 1; i++)
    {
        printf("%d < ", array[i]);
    }
    printf("%d", array[i]);
    return 0;
}
