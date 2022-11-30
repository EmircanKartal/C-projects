#include <stdio.h>
/*GCD: Greatest Common Divisor
  LCD: Least Common Divisor
*/
int get_number()
{
    int a;
    printf("Enter a integer: ");
    scanf("%d", &a);
    return a;
}

int LCD(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int GCD(int a, int b)
{
    int minor = a;
    if (b < a)
        minor = b;
    int i;
    for (i = minor; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
}

int main()
{
    int num1, num2;
    num1 = get_number();
    num2 = get_number();

    int gcd = GCD(num1, num2);
    int lcd = LCD(num1, num2);
    printf("GCD(%d,%d) = %d \n", num1, num2, gcd);
    printf("LCD(%d,%d) = %d", num1, num2, lcd);
    return 0;
}
