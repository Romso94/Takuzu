#include <stdio.h>
#include <unistd.h>
#include "fonctions_main.h"
#include "fonctions_resoudres.h"
#include <string.h>



int main() {

    /* VARIABLES */
    char choix[32];


    /* DEBUT AFFICHAGE */
    printf("Bienvenue dans le jeu du Takuzu ! \n");

    sleep(1);

    choix_joueur();

    gets(choix);

    /* Premier Choix du joueur */
    if (strcmp(choix,"regles")==0){                     /* Affiche les règles */
        printf("\n");
        regles();

    }else if (strcmp(choix,"resoudre")==0){            /* Partie où le joueur résout lui meme la grille de Takuzu */
        printf("\n");
        printf("Resoudre");

        resoudre();

    } else if (strcmp(choix,"auto")==0){                /* Partie où l'ordinateur  résout  la grille de Takuzu */
        printf("\n");
        printf("Auto");
        /* auto() */

    } else if (strcmp(choix,"generer")==0){             /* Partie pour générer une grille automatiquement */
        printf("\n");
        printf("Generer");
        /* generer() */

    } else {                                           /* Relance le programme si l'utilisateur s'est trompé */
        printf("\n");
        printf("Ce choix n'est pas disponible \n");
        printf("\n");
        main();
    }

    return 0;
}
