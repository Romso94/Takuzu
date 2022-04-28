//
// Created by Romai on 01/04/2022.
//

#include "fonctions_resoudres.h"
#include "fonction_generer_solution.h"
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
            int taille_m,ligne_1[4],ligne_2[4],ligne_3[4],ligne_4[4],verif_colon;
            taille_m = taille();

            if(taille_m==1){
                printf("\n");

                printf("Chargement de la Matrice ...");
                do{
                    nbr_ale_4x(ligne_1,ligne_2,ligne_3,ligne_4);

                    verif_colon = verif_colonne(ligne_1,ligne_2,ligne_3,ligne_4,4);
                } while (verif_colon==1);

                /* Forme matrice 4X4 */
                printf("\n");
                printf("_______________________________\n");
                printf("|     |  A  |  B  |  C  |  D  |\n");
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  1  |  %d  |  %d  |  %d  |  %d  |\n",ligne_1[0],ligne_1[1],ligne_1[2],ligne_1[3]);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  2  |  %d  |  %d  |  %d  |  %d  |\n",ligne_2[0],ligne_2[1],ligne_2[2],ligne_2[3]);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  3  |  %d  |  %d  |  %d  |  %d  |\n",ligne_3[0],ligne_3[1],ligne_3[2],ligne_3[3]);
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  4  |  %d  |  %d  |  %d  |  %d  |\n",ligne_4[0],ligne_4[1],ligne_4[2],ligne_4[3]);
                printf("|_____|_____|_____|_____|_____|\n");





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
