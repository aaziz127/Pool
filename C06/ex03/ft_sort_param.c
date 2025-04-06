#include <unistd.h>

int ft_strlen(const char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

void ft_sort_arg(char **arr, int num_args, int (*compare)(const char *, const char *))
{
    int i;
    int j;
    char *temp;

    for (i = 0; i < num_args - 1; i++)
    {
        for (j = 0; j < num_args - i - 1; j++)
        {
            if (compare(arr[j], arr[j + 1]) > 0)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int num_args;
    char    **args;
    int i;

    if (argc <= 1)
    {
        return 0;
    }

    num_args = argc - 1;
    args = argv + 1;
    ft_sort_arg(args, num_args, ft_strcmp);
    i = 0;
    while (i < num_args)
    {
        write(1, args[i], ft_strlen(args[i]));
        write(1, "\n", 1);
        i++;
    }

    return 0;
}
