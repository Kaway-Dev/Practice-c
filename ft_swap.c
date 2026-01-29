#include <stdio.h>
void ft_swap(int *a, int *b)
{

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;


}

int main(void)
{

    int a;
    int b;

    a = 10;
    b = 20;

    ft_swap(&a, &b);
    printf("troca a = %d, b = %d", a, b);
}