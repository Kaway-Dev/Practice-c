void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 10;
    b = 20;

    ft_swap(&a, &b);
    printf("resultado de a: %i, resultado de b: %i", a, b);
    return(0);
}