#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 10;
    b = 5;

    ft_div_mod(a, b, &div, &mod);
    printf("resultado de div a = %d, resultado do resto b = %d", div, mod);
    return(0);
}