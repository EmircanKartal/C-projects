#include <stdio.h>
void uppertree(row)
{
    int i, j;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= 2 * row - 1; j++)
        {
            if (j >= row - (i - 1) && j <= row + (i - 1))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= 2 * row - 1; j++)
        {
            if (j >= row - (i - 1) && j <= row + (i - 1))
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}

int lowertree(row)
{

    if (row%2 == 0) // if row is even number

    {
        for (int k = 0; k < 5; k++)
        {
            for (int a = 1; a <= ((row / 2)); a++)
            {
                printf(" ");
            }
            printf("||\n");
        }
    }

    if (row%2 != 0) // if row is odd number

    {
        for (int k = 0; k < 5; k++)
        {
            for (int a = 1; a <= ((row / 2)+3); a++)
            {
                printf(" ");
            }
            printf("||\n");
        }
    }
}
int main()
{

    int row;

    printf("How many row you want in your each christmas tree?  ");
    scanf("%d", &row);

    uppertree(row);
    lowertree(row);
}