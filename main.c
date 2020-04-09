#include <stdio.h>
int gcd(int, int);
int main()
{
    int num1, num2, res;
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);
    res = gcd(num1, num2);
    printf("The GCD of %d and %d is %d.", num1, num2, res);
    return 0;
}
int gcd(int p, int q)
{
    int i, less = q;
    if(p < q)
        less = p;
    i = 2;
    again:
    if(i <= less)
    {
        if(p % i == 0 && q % i == 0)
        {
            return i * gcd(p / i, q / i);
        }
        else
        {
            i++;
            goto again;
        }
    }
    return 1;

//    WITHOUT RECURSION
//    for(i = less; i > 0; i--) {
//        if (p % i == 0 && q % i == 0)
//            return i;
//    }
}