#include<stdio.h>

int fatorial(int n)
{
    if(n == 1)
        return n;
    else
        return (n * fatorial(n - 1));
}
int main(void)
{
    int num;
    puts("Digite um numero inteiro: ");
    scanf("%d",&num);
    printf("%d\n", fatorial(num));
}
