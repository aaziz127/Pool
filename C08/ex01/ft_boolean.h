#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h> // Pour la fonction write

// Définition des constantes booléennes
#define TRUE 1
#define FALSE 0
#define SUCCESS 0

// Définition du type t_bool
typedef int t_bool;

// Macro pour vérifier si un nombre est pair
#define EVEN(NBR) ((NBR) % 2 == 0)

// Messages à afficher
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"

#endif
