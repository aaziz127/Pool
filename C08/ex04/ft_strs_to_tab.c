#include "ft_strs_to_tab.h"
#include <stdlib.h>
#include <string.h>

// Fonction pour calculer la longueur d'une chaîne de caractères
int ft_strlen(const char *str) {
  int len = 0;
  while (str[len])
    len++;
  return len;
}

// Fonction pour allouer et copier une chaîne de caractères
char *ft_strdup(const char *src) {
  int len = ft_strlen(src);
  char *dest = malloc((len + 1) * sizeof(char)); // +1 pour le caractère nul
  if (!dest)
    return NULL;

  int i = 0;
  while (src[i]) {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0'; // Ajouter le caractère nul à la fin
  return dest;
}

// Fonction principale : Convertir un tableau de chaînes en un tableau de
// structures
struct s_stock_str *ft_strs_to_tab(int ac, char **av) {
  // Allouer le tableau de structures (+1 pour l'élément de fin avec str = NULL)
  struct s_stock_str *tab = malloc((ac + 1) * sizeof(struct s_stock_str));
  if (!tab)
    return NULL;

  int i = 0;
  while (i < ac) {
    tab[i].size = ft_strlen(av[i]);
    tab[i].str = av[i]; // Stocker le pointeur vers la chaîne originale
    tab[i].copy = ft_strdup(av[i]); // Créer une copie de la chaîne
    if (!tab[i].copy)               // Vérifier si l'allocation a échoué
    {
      // Libérer toutes les ressources déjà allouées en cas d'échec
      int j = 0;
      while (j < i) {
        free(tab[j].copy);
        j++;
      }
      free(tab);
      return NULL;
    }
    i++;
  }

  // Ajouter l'élément de fin avec str = NULL
  tab[ac].str = NULL;
  tab[ac].size = 0;
  tab[ac].copy = NULL;

  return tab;
}
