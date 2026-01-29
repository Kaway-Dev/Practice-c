char    *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>

int main(void){
    char str[100] = "Ola";
    char str2[] = "mundo";

    printf("resultado: %s", ft_strcpy(str, str2));
    return(0);
}