
#include <stdio.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src, char *sep) {
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i])
    i++;
  while (src[j]) {
    dest[i] = src[j];
    i++;
    j++;
  }
  j = 0;
  while (sep[j]) {
    dest[i] = sep[j];
    j++;
    i++;
  }
  dest[i] = '\0';
  return (dest);
}

int ft_l(char *str) {
  int i;

  i = 0;
  while (*str) {
    str++;
    i++;
  }
  return (0);
}

int ft_strlen(int size, char **strs) {
  int letter;
  int i;
  int j;

  letter = 1;
  i = 0;
  while (i < size) {
    j = 0;
    while (strs[j]) {
      letter++;
      j++;
    }
    i++;
  }
  return (letter);
}

char *ft_strjoin(int size, char **strs, char *sep) {
  char *join;
  int len;
  int i;

  if (size == 0) {
    join = (char *)malloc(sizeof(char));
    return (join);
  }
  len = ft_strlen(size, strs);
  join = (char *)malloc((len + (size - 1) * ft_l(sep)) * sizeof(char *) + 1);
  if (!join)
    return (NULL);
  join[0] = '\0';
  i = 0;
  while (i < size) {
    if (i == size - 1)
      join = ft_strcat(join, strs[i], "\0");
    else
      join = ft_strcat(join, strs[i], sep);
    i++;
  }
  return (join);
}

int main(void) {
  char *src1 = "hello";
  char *src2 = "all";
  char *src3 = "in fourty two";
  char *src4 = "dite hello";
  char *srcs[] = {src1, src2, src3, src4};
  char *sep = ":-";
  char *dest1;
  char *dest2;

  dest1 = ft_strjoin(4, srcs, sep);
  dest2 = ft_strjoin(0, srcs, sep);
  printf("dest1:");
  for (int i = 0; dest1[i] != '\0'; i++) {
    printf("%c", dest1[i]);
  }
  printf("\ndest2:%s\n", dest2);

  free(dest1);
  free(dest2);

  return 0;
}
