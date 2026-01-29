#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{

    int temp;

    temp = *a;
    *a = temp / *b;
    *b = temp % *b;
}

int main(void)
{
    int a;
    int b;

    a = 10;
    b = 5;

    ft_ultimate_div_mod(&a, &b);
    printf("divisao a = %d, resto b = %d:", a, b);
    return(0);
}