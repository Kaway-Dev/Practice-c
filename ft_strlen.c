#include <stdio.h>

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while(str[count] != '\0') {
        count++;
    }
    return count;
}

int main(void)
{
    int tamanho = ft_strlen("cinco");
    printf("Tamanho: %d\n", tamanho);
    return 0;
}