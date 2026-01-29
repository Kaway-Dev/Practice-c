#include <unistd.h>

void ft_mundo(void)
{
    write(1, "Olá, mundo\n", 12);

}

int main(void)
{
    ft_mundo();
    return(0);
}