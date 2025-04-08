#ifndef FT_STRS_TO_TAB_H
#define FT_STRS_TO_TAB_H

#include <stdlib.h>

typedef struct s_stock_str {
  int size;   // Taille de la chaîne de caractères
  char *str;  // Pointeur vers la chaîne de caractères originale
  char *copy; // Copie de la chaîne de caractères
} t_stock_str;

// Prototype de la fonction
struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
