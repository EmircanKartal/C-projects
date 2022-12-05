#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Question: Instructs C to calculate the value of the following series for the given x and n entries.
𝑥 +(𝑥²/3!)+(𝑥³/5!)+ ⋯ +𝑥ⁿ/(2𝑛 − 1)!

- The n and x values ​​must be retrieved from the user in the main() function.
- The factorial calculation should be done in the fact() function.
- Aggregation must be done inside the sumfunc() function.
- The actual sum of the series should be printed on the screen.
- The rounded down (base) value of the actual sum of the series should be printed on the screen.
*/

int fact(int n)
{
    int carpim = 1, i;
    for (i = n; i > 0; i--)
    {
        carpim = carpim * i;
    }
    return carpim;
}

float sumfunc(int x, int n)
{
    float sum = 0;
    int k;
    for (k = 1; k <= n; k++)
    {
        sum += (pow(x, k) / fact(2 * k - 1)); // artı solda olacak
    }

    return sum;
}

int main()
{
    int n, x;
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("\nEnter the value for n: ");
    scanf("%d", &n);
    printf("\n\n----------------------\n\n");
    printf("The actual total value of the series: %.4f \n", sumfunc(x, n));
    printf("Floor value of the %.4f is %.4f \n", sumfunc(x, n), floor(sumfunc(x, n)));
    return 0;
}