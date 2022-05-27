// Takuzu Projet C 
//  Ce fichier permets de lancer les différentes fonctionnalités proposé à l'utilisateur


#include <stdio.h>
#include <unistd.h>
#include "fonctions_main.h"
#include "fonctions_resoudres.h"
#include <string.h>

#include "generer.h"
#include "auto.h"



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
        printf("\n");
        sleep(5);
        main();

    }else if (strcmp(choix,"resoudre")==0){            /* Partie où le joueur résout lui meme la grille de Takuzu */
        printf("\n");
        printf("Resoudre");

        resoudre();

    } else if (strcmp(choix,"auto")==0){                /* Partie où l'ordinateur résout la grille de Takuzu */
        int taille;
        printf("\n");
        printf("Auto");




        do {
            printf("\n");
            printf("Choisir la taille 4 ou 8 : ");
            scanf("%d",&taille);
        } while (taille<4 || taille>4&& taille<8 || taille>8);

        auto_(taille);

    } else if (strcmp(choix,"generer")==0){             /* Partie pour générer une grille automatiquement */
        int taille;
        printf("\n");
        printf("Generer");

        do {
            printf("\n");
            printf("Choisir la taille 4 ou 8 : ");
            scanf("%d",&taille);
        } while (taille<4 || taille>4&& taille<8 || taille>8);

        generer(taille);

    } else {                                           /* Relance le programme si l'utilisateur s'est trompé */
        printf("\n");
        printf("Ce choix n'est pas disponible \n");
        printf("\n");
        main();
    }

    return 0;
}


