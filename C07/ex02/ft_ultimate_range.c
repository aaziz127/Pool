
#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
  int len;
  int i;

  len = max - min;
  i = 0;
  if (len <= 0) {
    *range = 0;
    return (-1);
  } else {
    *range = (int *)malloc(len * sizeof(int));
    if (*range == NULL)
      return (-1);
    while (min < max) {
      range[0][i] = min;
      min++;
      i++;
    }
    return (len);
  }
}

int main(void) {
  int **tab;
  int i;
  int len;
  int min;
  int max;

  min = 5;
  max = 19;
  i = 0;
  len = ft_ultimate_range(tab, min, max);
  if (len == 0)
    printf("tab[0] = Null\n");
  else {
    while (i < len) {
      printf("tab[0][%d] = %d\n", i, tab[0][i]);
      i++;
    }
  }
  return (0);
}
