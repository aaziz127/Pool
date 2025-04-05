#include <unistd.h>
#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb)
{
    int s;

    s = 1;
    if (nb < 0)
        return (0);
    while (s <= (nb / 2 + 1))
    {
        if ( (s * s) == nb)
            return (s);
        s++;
    }
    return (0);
}

int main(int argc, char *argv[])
{
    int nb;
    int i;

    nb = 200;
    i = 0;
    while (i <= nb)
    {
        printf("--------------------------\n");
        printf("sqrt(%d) = %d \n", i, ft_sqrt(i));
        printf("sqrt(%d) = %.2f\n", i, sqrt(i));
        i++;
    }
    return (0);
}
