

#include <unistd.h>

void put_char(char c)
{
    write(1, &c, 1);
}

void if_negative(int *nb)
{
    put_char('-');
    *nb = -(*nb);
}

void put_digits(int nb, char *buffer, int *index)
{
    while (nb > 0)
    {
        buffer[(*index)++] = (nb % 10) + '0';
        nb /= 10;
    }
}

void print_buffer(char *buffer, int index)
{
    while (index > 0)
    {
        put_char(buffer[--index]);
    }
}

void ft_putnbr(int nb) {
    char buffer[12];
    int index;

    index= 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
        if_negative(&nb);
    if (nb == 0)
    {
        put_char('0');
        return;
    }
    put_digits(nb, buffer, &index);
    print_buffer(buffer, index);
}

int main()
{
    ft_putnbr(-2147483648);
    put_char('\n');
    ft_putnbr(2147483647);
    put_char('\n');
    ft_putnbr(0);
    put_char('\n');
    ft_putnbr(12345);
    put_char('\n');
    ft_putnbr(-9876);
    return 0;
}
