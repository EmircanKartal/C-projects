#include <stdio.h>
int addNumbers_with_if(int n);

/*C program that sums all the positive integers from a integer you entered to 1. Gauss Summation: 
1 +2 +3 +4 +...+ n = n x (n+1)/2
                     
 */

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Total = %d",addNumbers_with_if(num));
    
    return 0;
}

int addNumbers_with_if(int n)
{
    if(n != 0)
        return n + addNumbers_with_if(n-1);
    else
        return n;
}

