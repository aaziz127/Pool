
#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0); 
    if (nb == 0 && power == 0)
        return (1);
    if (power == 0)
        return(1);
    else
        return (nb * ft_recursive_power(nb, power - 1));
}

int main(int argc, char *argv[])
{
    int max;
    int min;
    int minp;
    int maxp;
    int i;
    int j;

    min = -6;
    minp = -1;
    max = 6;
    maxp = 6;
    i = min;
    printf("\n-------------------------------------\n");
    while (i <= max)
    {
        j = minp;
        while(j <= maxp)
        {
            printf("%d^%d = %d", i, j , ft_recursive_power(i, j));
            printf("\n");
            j++;
        }
        printf("\n-------------------------------------\n");
        i++;
    }

    return (0);
}
