#include <unistd.h>

// Function prototypes
void merge(char **arr, int left, int mid, int right, int (*compare)(const char *, const char *));
int my_strcmp(const char *s1, const char *s2);
int my_strlen(const char *str);
void int_to_str(int num, char *buffer);

// Merge sort function
void merge_sort(char **arr, int left, int right, int (*compare)(const char *, const char *))
{
    int mid;
    if (left >= right)
    {
        return;
    }
    mid = left + (right - left) / 2;
    merge_sort(arr, left, mid, compare);
    merge_sort(arr, mid + 1, right, compare);
    merge(arr, left, mid, right, compare);
}

// Main function
int main(int argc, char *argv[])
{
    int num_args;
    char **args;
    int i;

    if (argc <= 1)
    {
        return 0;
    }

    num_args = argc - 1;
    args = argv + 1;

    // Perform merge sort
    merge_sort(args, 0, num_args - 1, my_strcmp);

    // Output sorted strings
    for (i = 0; i < num_args; i++)
    {
        write(1, args[i], my_strlen(args[i]));
        write(1, "\n", 1);
    }

    return 0;
}
