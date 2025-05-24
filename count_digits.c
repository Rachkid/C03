#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int nombre;       // Variable pour stocker le nombre saisi par l'utilisateur
    int compteur = 0; // Variable pour compter le nombre de chiffres

    scanf("%d", &nombre);  // Lecture du nombre

    int copie = nombre;  // On garde une copie du nombre original pour l'affichage

    // Si l'utilisateur entre 0, il a 1 chiffre
    if (nombre == 0) {
        compteur = 1;
    } else {
        // Boucle while pour diviser le nombre par 10 jusqu'à ce qu'il devienne 0
        while (nombre != 0) {
            nombre /= 10;   // Supprime le dernier chiffre
            compteur++;     // Incrémente le compteur de chiffres
        }
    }

    // Affiche le résultat
    printf("%d contient %d chiffre(s).\n", copie, compteur);

    return 0;  // Fin normale du programme
}
