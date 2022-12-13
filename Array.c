#include <stdio.h>
#include <stdlib.h>
/*C program that shows all the elements of array you type. Calculates the sum and arithmetic mean of it.*/

int create_array(int n)
{
    int i,total=0,A[n];
    for(i=0; i<n; i++)
    {
        printf("%d. Enter the element: ",i+1);
        scanf("%d",&A[i]);
        total=total+A[i];
    }
    printf("Your array A[");
    for(i=0; i<n; i++)
    {
        if(i==n-1)
            printf("%d",A[i]);
        else
            printf("%d ",A[i]);
    }
    printf("]\n");
    printf("Sum of elements in your array: %d\n",total);
    printf("The arithmetic mean of the elements in the array: %.2f",(float)total/n);
}
int main()
{
    int n;
start_again:
    printf("How many elements should the array have?: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Incorrect number, please enter a positive integer.\n");
        goto start_again;
    }
    else if(n==0)
    {
        printf("Empty set, please enter a positive integer.\n");
        goto start_again;
    }
    else
    {
        create_array(n);
    }
    return 0;
}