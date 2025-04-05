
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int64_t ft_fast_fibonacci(int index)
{
    int64_t result[index + 1];
    int i;

    i = 2;
    result[0] = 0;
    result[1] = 1;
    while (i <= index)
    {
        result[i] = result[i - 1] + result[i - 2];
        i++;
    }
    return (result[index]);
}

int main(int argc, char *argv[])
{

    int max;
    int min;
    int i;

    min = 0;
    max = 50;
    i = min;
    while (i <= max)
    {
            printf("fib(^%d) = %lld", i , ft_fast_fibonacci(i));
            printf("\n");
        i++;
    }

    return (0);
}
