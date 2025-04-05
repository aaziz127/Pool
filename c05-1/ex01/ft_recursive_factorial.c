
#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb)
{
    if (nb <= 0)
        return (0);
    else 
        if ( nb == 1)
            return (1);
        else 
            return ( nb * ft_recursive_factorial (nb - 1));
}

int main(int argc, char *argv[])
{
    int i;
    int maxval;

    i = 0;
    maxval = 17;
    while (i <= maxval)
    {
        printf(" %d!   = %d", i , ft_recursive_factorial(i));
        printf("\n");
        i++;
    }
    return (0);
}
