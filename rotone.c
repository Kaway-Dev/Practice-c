#include <unistd.h>

int main(int argc, char **argv)
{
    int  i;
    char letter;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            letter = argv[1][i];
            if (letter >= 'a' && letter <= 'y')
                letter += 1;
            else if (letter >= 'A' && letter <= 'Y')
                letter += 1;
            else if (letter == 'z')
                letter = 'a';
            else if (letter == 'Z')
                letter = 'A';
            write(1, &letter, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
