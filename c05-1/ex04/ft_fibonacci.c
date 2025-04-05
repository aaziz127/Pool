#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index < 0)
        return (-1);
    if (index == 0)
        return (0);
    if ( index == 1)
        return (1);
    return ( ft_fibonacci(index-1) + ft_fibonacci(index - 2));
}

int main(int argc, char *argv[])
{

    int max;
    int min;
    int i;

    min = 0;
    max = 46;
    i = min;
    while (i <= max)
    {
            printf("fib(%d) = %d", i , ft_fibonacci(i));
            printf("\n");
        i++;
    }

    return (0);
}
