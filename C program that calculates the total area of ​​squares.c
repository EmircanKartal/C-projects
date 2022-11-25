#include <stdio.h>
#include <stdlib.h>
/*
C program that calculates the total area of ​​squares.
Enter a side of the main square and the amount of how many times you want to divide the square.
the program sums all areas of all the squares and print it.
*/
int main()
{
    while(1)
    {
        float toplam=0,a,n,kontrol;
        printf("Enter the length of the side (a) of the square: ");
        scanf("%f",&a);
        printf("Enter N value: ");
        scanf("%f",&n);
        if(a<=0||n<=0)
        {
            printf("Do not enter a negative value!\n");
            continue;
        }
        for(n; n>0; n--)
        {
            toplam+=(a*a);
            a=a/2;
        }
        kontrol=(toplam/((int)toplam));
        if(kontrol==1)
            printf("Total area : %.f",toplam);
        else
            printf("Total area : %.1f",toplam);
        break;
    }
    return 0;
}
