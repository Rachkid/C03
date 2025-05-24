#include <stdio.h>  // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int a, b, c;  // Déclaration de trois variables entières pour stocker les nombres
    int max;      // Variable pour stocker le plus grand nombre

    scanf("%d %d %d", &a, &b, &c);  // Lecture des trois entiers depuis le clavier

    // Supposons que 'a' est le plus grand pour commencer
    max = a;

    // Si 'b' est plus grand que 'max', on met 'b' dans 'max'
    if (b > max) {
        max = b;
    }

    // Si 'c' est plus grand que 'max', on met 'c' dans 'max'
    if (c > max) {
        max = c;
    }

    // Affiche le plus grand nombre
    printf("Le plus grand nombre est : %d\n", max);

    return 0;  // Fin normale du programme
}

