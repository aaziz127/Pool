#include <unistd.h>

// Function to calculate the length of a string
int my_strlen(const char *str)
{
    int len;
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

// Function to convert an integer to a string
void int_to_str(int num, char *buffer)
{
    int i = 0;
    if (num == 0)
    {
        buffer[i++] = '0';
    }
    else
    {
        while (num > 0)
        {
            buffer[i++] = '0' + (num % 10);
            num /= 10;
        }
    }
    buffer[i] = '\0';
    // Reverse the string
    int j = 0;
    int k = i - 1;
    while (j < k)
    {
        char temp = buffer[j];
        buffer[j] = buffer[k];
        buffer[k] = temp;
        j++;
        k--;
    }
}

// Function to compare two strings
int my_strcmp(const char *s1, const char *s2)
{
    int i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

// Copy subarray into temporary arrays
void copy_subarray(char **src, char **dest, int start, int end)
{
    int i;
    i = start;
    while (i <= end)
    {
        dest[i - start] = src[i];
        i++;
    }
}

// Merge main loop
void merge_main_loop(char **arr, int *k, int *i, int *j, char **left_arr, char **right_arr, int left_size, int right_size, int (*compare)(const char *, const char *))
{
    while ((*i) < left_size && (*j) < right_size)
    {
        if (compare(left_arr[*i], right_arr[*j]) <= 0)
        {
            arr[*k] = left_arr[*i];
            (*i)++;
        }
        else
        {
            arr[*k] = right_arr[*j];
            (*j)++;
        }
        (*k)++;
    }
}

// Handle remaining elements in left_arr or right_arr
void merge_remaining(char **arr, int k, int i, int j, char **left_arr, char **right_arr, int left_size, int right_size)
{
    while (i < left_size)
    {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < right_size)
    {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

// Merge two sorted subarrays
void merge_arrays(char **arr, int left, int mid, int right, char **left_arr, char **right_arr, int (*compare)(const char *, const char *))
{
    int i;
    int j;
    int k;
    int left_size;
    int right_size;

    left_size = mid - left + 1;
    right_size = right - mid;

    i = 0;
    j = 0;
    k = left;

    merge_main_loop(arr, &k, &i, &j, left_arr, right_arr, left_size, right_size, compare);
    merge_remaining(arr, k, i, j, left_arr, right_arr, left_size, right_size);
}

// Merge function
void merge(char **arr, int left, int mid, int right, int (*compare)(const char *, const char *))
{
    char *left_arr[50];
    char *right_arr[50];

    copy_subarray(arr, left_arr, left, mid);
    copy_subarray(arr, right_arr, mid + 1, right);

    merge_arrays(arr, left, mid, right, left_arr, right_arr, compare);
}
