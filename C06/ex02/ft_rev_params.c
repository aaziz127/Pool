
#include <unistd.h>

void put_str(char *str)
{

    while(*str != '\0')
    {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char *argv[])
{
    argc -= 1;
    if (argc >= 2)
    {
        while (argc > 0)
        {
            put_str( argv[argc]);
            write(1, "\n", 1);
            argc--;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}
