#include <stdio.h>  // Inclusion de la bibliothèque standard pour printf et scanf

int main() {  // Fonction principale
    float celsius, fahrenheit;  // Déclaration des variables :
                                // - celsius : stocke la température en °C saisie
                                // - fahrenheit : stocke le résultat en °F
    scanf("%f", &celsius);  // Lecture de la température en °C

    fahrenheit = (celsius * 9 / 5) + 32;  // Conversion en °F selon la formule

    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);  // Affichage du résultat avec 1 décimale
    return 0;  // Fin du programme avec succès
}
