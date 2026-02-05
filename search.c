#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
    {
        i = 0;
        while(argv[1][i])
        {   
            if(argv[1][i] == argv[2][0])
                write(1, &argv[3][0], 1);
            else 
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}



// Escreva um programa chamado search_and_replace que recebe 3 argumentos:
// • o primeiro argumento é uma string onde uma letra será substituída
// • o segundo argumento é a letra que você quer procurar
// • o terceiro argumento é a letra que vai substituir a anterior

// Se o número de argumentos não for exatamente 3, o programa deve apenas imprimir uma nova linha.

// Se o segundo argumento não estiver contido no primeiro (a string), então o programa apenas reescreve a string original seguida de uma nova linha.