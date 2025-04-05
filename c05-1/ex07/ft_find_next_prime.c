
#include <unistd.h>
#include <stdio.h>
#include <math.h>

int ft_is_prime(int nb)
{
    int div;
    int count;

    div = 2;
    count = 0;
    while ( div <= (int)sqrt(nb))
    {
        if (nb % div == 0)
            count++;
        div++;
    }
    if (count == 0)
        return (1);
    else
        return (0);
}

int ft_find_next_prime(int nb)
{
    int i;
    int pr;

    i = nb;
    pr = nb;
    while (i >= nb)
    {
        if (ft_is_prime (i))
            return (i);
        i++;
    }
    return (pr);
}

int main(int argc, char *argv[])
{
    int nb;
    int sum;
    int count;
    int i;

    i = 2;
    nb = 50;
    sum = 0;
    count = 0;
    while (i <= nb)
    {
        printf("----------------\n");
        if (ft_is_prime(i))
        {
            sum += i;
            count++;
            printf("%d : is prime\n", i);
        }
        else 
            printf("%d : not a prime!!\n",i);
         printf("first prime imediately after %d is : %d\n", i, ft_find_next_prime(i));
        i++;
    }
    printf("sum of %d primes in [2 -> %d] = %d\n", count, nb, sum);

    return (0);
}
