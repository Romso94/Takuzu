//
// Created by Romai on 01/04/2022.
//

#include "fonctions_resoudres.h"
#include <stdio.h>



void resoudre() {
    int choix;
    printf("\n");
    printf("Dans ce mode de jeu vous avez plusieurs options : \n");
    printf("1. Choisir la taille \n");
    printf("2. Saisir manuellement un masque \n");
    printf("3. G%cn%crer automatiquement un masque \n", 130, 130);
    printf("4. Jouer \n");
    printf("Choisir une option : ");

    scanf("%d", &choix);

    switch (choix) {
        case 1: {
            int taille_m;
            taille_m = taille();

            if(taille_m==1){
                printf("\n");
                /* Forme matrice 4X4
                printf("_______________________________\n");
                printf("|     |  A  |  B  |  C  |  D  |\n");
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  1  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  2  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  3  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  4  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0);
                printf("|_____|_____|_____|_____|_____|\n");

                 */
                


            } else if (taille_m==2){
                printf("\n");
                /* Forme matrice 8X8
                printf("_______________________________________________________\n");
                printf("|     |  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |\n");
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  1  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  2  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  3  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  4  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  5  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  6  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  7  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  8  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n",0,0,0,0,0,0,0,0);
                printf("|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
                */


            }

            break;
        }

        case 2: {
            /* Saisir_Masque() */

            break;
        }

        case 3: {
            /* Generer_Masque() */

            break;
        }

        case 4: {
            /* Jouer */

            break;
        }
        default: {
            resoudre();

        }
    }
}


int taille(){
    /* Variables */
    int tailles;

    /* Core fonction */
    printf("\n");
    printf("Options possibles : \n");
    printf("1. Grille 4x4 \n");
    printf("2. Grille 8x8 \n");
    printf("Choix : ");

    scanf("%d",&tailles);

    switch (tailles) {
        case 1:{
            return 1;
            break;
        }
        case 2:{
            return 2;
        }
        default:{
            taille();
        }

    }

}
