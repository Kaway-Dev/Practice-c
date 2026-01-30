#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int repeat;
    char c;

    if (argc == 2)
    {
        i = 0;
        while (argv[1][i])
        {
            c = argv[1][i];
            if (c >= 'a' && c <= 'z')
                repeat = c - 'a' + 1;
            else if (c >= 'A' && c <= 'Z')
                repeat = c - 'A' + 1;
            else
                repeat = 1;
            while (repeat--)
                write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
