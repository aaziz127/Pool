#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strcpy_sep(int *k, char *dest, const char *src, char *sep) {
  char *dest_orig;

  dest_orig = &dest[*k];
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
    (*k)++;
  }
  while (*sep != '\0') {
    *dest = *sep;
    dest++;
    sep++;
    (*k)++;
  }
  return (dest_orig);
}
char *ft_strcpy(int *k, char *dest, const char *src) {
  char *dest_orig;

  dest_orig = &dest[*k];
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
    (*k)++;
  }
  *dest = '\0';
  return (dest_orig);
}

char *ft_strjoin(int size, char **strs, char *sep) {
  char *dest;
  int len;
  int i;
  int k;

  len = 0;
  i = 0;
  k = 0;
  while (i < size) {
    len += strlen(strs[i]);
    i++;
  }
  len += (((size - 1) * strlen(sep)) + 1);

  if (size == 0)
    return ((char *)malloc(sizeof(char *)));

  printf("len dest :%d\n", len);
  dest = (char *)malloc(len * sizeof(char *));
  while (i < size - 1) {
    ft_strcpy_sep(&k, dest, strs[i], sep);
    i++;
    k++;
  }
  ft_strcpy(&k, dest, strs[i]);
  dest[k] = '\0';
  return dest;
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
    printf("%c\n", dest1[i]);
  }
  printf("\ndest2:%s\n", dest2);

  free(dest1);
  free(dest2);

  return EXIT_SUCCESS;
}
