#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    if (nb <= 0)
        return (0);
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    return (result);
}

int main(int argc, char *argv[])
{
    int i;
    int maxval;

    i = 0;
    maxval = 10;
    while (i <= maxval)
    {
        printf(" %d! =  %d", i , ft_iterative_factorial(i));
        printf("\n");
        i++;
    }
    return (0);
}
