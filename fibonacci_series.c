#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int limit;  // Variable pour stocker la limite saisie par l'utilisateur
    int a = 0, b = 1, suivant;  // a et b sont les deux premiers nombres de Fibonacci, suivant est le prochain à calculer

    scanf("%d", &limit);  // Lecture de la valeur limite

    // Affichage du début de la série
    printf("Fibonacci : %d %d ", a, b);

    // Boucle tant que le prochain terme est inférieur ou égal à la limite
    while (1) {
        suivant = a + b;  // Calcul du prochain terme de la série

        if (suivant > limit)  // Si on dépasse la limite, on arrête
            break;

        printf("%d ", suivant);  // Affichage du terme suivant
        a = b;  // Mise à jour : l’ancien 'b' devient le nouveau 'a'
        b = suivant;  // 'suivant' devient le nouveau 'b'
    }

    printf("\n");  // Saut de ligne à la fin
    return 0;  // Fin normale du programme
}
