
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max) {
  int *range;
  int i;

  i = 0;
  if (min >= max)
    return (NULL);
  else {
    range = (int *)malloc((max - min) * sizeof(int));
    while (min < max) {
      *(range + i) = min;
      min++;
      i++;
    }
    return (range);
  }
}

int main(void) {
  int *tab;
  int i;
  int min;
  int max;

  min = 3;
  max = 19;
  i = 0;
  tab = ft_range(min, max);
  if (tab == NULL)
    printf("tab = Null\n");
  else {
    while (min < max) {
      printf("tab[%d] = %d\n", i, *(tab + i));
      min++;
      i++;
    }
  }
  return (0);
}
