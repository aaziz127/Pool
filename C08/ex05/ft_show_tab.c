#include "ft_strs_to_tab.h"
#include <stdio.h>

// Fonction pour afficher une structure (pour tester)
void ft_show_tab(struct s_stock_str *stock) {
  while (stock->str != NULL) {
    printf("Size: %d, Str: %s, Copy: %s\n", stock->size, stock->str,
           stock->copy);
    stock++;
  }
}

int main(void) {
  // Exemple de tableau de chaînes
  char *av[] = {"Hello", "World", "Piscine", "C"};
  int ac = 4;

  // Appel de la fonction
  struct s_stock_str *result = ft_strs_to_tab(ac, av);

  if (!result) {
    printf("Erreur d'allocation mémoire.\n");
    return 1;
  }

  // Affichage du résultat
  print_stock_str(result);

  // Libération de la mémoire
  int i = 0;
  while (result[i].str != NULL) {
    free(result[i].copy);
    i++;
  }
  free(result);

  return 0;
}
