/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaziz <alaziz@student.42,fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:00:44 by aaziz             #+#    #+#             */
/*   Updated: 2025/04/06 14:03:16 by aaziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, const char *src) {
  char *dest_orig;

  dest_orig = dest;
  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return (dest_orig);
}

char *ft_strdup(char *src) {
  char *dup;

  dup = (char *)malloc(sizeof(src));
  if (dup == NULL)
    return (NULL);
  ft_strcpy(dup, src);
  return (dup);
}

int main(void) {
  char *src = "hello world in fourty two this for test purpose";
  char *dest;

  dest = ft_strdup(src);
  printf("src = %s\n", src);
  printf("dest = %s\n", dest);

  free(dest);
  char *src1 = "";
  dest = ft_strdup(src1);
  printf("src = %s\n", src1);
  printf("dest = %s\n", dest);
  free(dest);

  return (0);
}
