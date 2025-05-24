#include <stdio.h>  // Inclusion de la bibliothèque standard pour printf et scanf

int main() {  // Fonction principale
    int nombre, inverse = 0, reste;  // Déclaration des variables :
                                     // - nombre : stocke l'entier saisi
                                     // - inverse : stocke le résultat inversé
                                     // - reste : stocke le chiffre extrait à chaque itération

    scanf("%d", &nombre);  // Lecture de l'entier saisi par l'utilisateur

    // Boucle while pour inverser le nombre
    while (nombre != 0) {  // Tant que le nombre n'est pas réduit à 0
        reste = nombre % 10;  // Extraction du dernier chiffre (reste de la division par 10)
        inverse = inverse * 10 + reste;  // Construction du nombre inversé
        nombre = nombre / 10;  // Suppression du dernier chiffre du nombre original
    }

    printf("Nombre inversé : %d\n", inverse);  // Affichage du résultat
    return 0;  // Fin du programme avec succès
}
