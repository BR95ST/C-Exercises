#include<stdio.h>

int factorial(int n)
{
    if(n == 1)
        return n;
    else
        return (n * factorial(n - 1));
}
int main(void)
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("Factorial: %d\n", factorial(num));
}
