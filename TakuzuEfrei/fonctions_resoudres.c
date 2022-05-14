//
// Created by Romai on 01/04/2022.
//

#include "fonctions_resoudres.h"
#include "fonction_generer_solution.h"
#include "fonctions_generer_masque.h"
#include <stdio.h>
#include <stdlib.h>



void resoudre() {
    int choix,masque,masque_manu;
    int taille_m,verif_colon;
    colonne a;


    printf("\n");
    printf("Pour commencer veuillez choisir la taille de la matrice :  \n");



            taille_m = taille();






                do {
                    printf("\n");
                    printf("Choisir une options pour g%cn%crer le masque :  \n",130,130);
                    printf("1. Manuellement  \n");
                    printf("2. Automatiquement  \n");
                    printf("Choix : ");
                    scanf("%d",&masque);
                } while (masque>2 || masque<1);





            if(taille_m==1){
                int masque_m4[4][4];
                int m_solution4[4][4],ligne_1[4],ligne_2[4],ligne_3[4],ligne_4[4];
                int jouer[4][4];




                    printf("\n");

                    printf("Chargement de la Matrice ...");

                 do{
                nbr_ale_4x(ligne_1,ligne_2,ligne_3,ligne_4);
                verif_colon = verif_colonne(ligne_1,ligne_2,ligne_3,ligne_4,4);

               } while (verif_colon==1);

                if (masque==2){
                    generer_masque4(masque_m4);

                } else {
                    printf("\n");
                    printf("\n");
                    printf("Vous allez remplir vous meme le masque  \n");

                    for (int i = 0; i < 4; i++) {
                        for (int j = 0; j < 4; j++) {
                            do {
                                printf("\n");
                                a = j;
                                printf("Choix 1 ou 0 pour la case [%d]", i + 1);
                                switch (a) {

                                    case A: {
                                        printf("[A] : ");
                                        break;
                                    }

                                    case B: {
                                        printf("[B] : ");
                                        break;
                                    }

                                    case C: {
                                        printf("[C] : ");
                                        break;
                                    }

                                    case D: {
                                        printf("[D] : ");
                                        break;
                                    }


                                }

                                scanf("%d", &masque_manu);
                                masque_m4[i][j] = masque_manu;

                            } while (masque_manu < 0 || masque_manu > 1);
                        }

                    }
                }





                solution(m_solution4,ligne_1,ligne_2,ligne_3,ligne_4,4);

                /* Forme matrice 4X4 */
                printf("\n");
                printf("_______________________________\n");
                printf("|     |  A  |  B  |  C  |  D  |\n");
                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  1  |");
                if (masque_m4[0][0]==1) {
                    printf("  %d  |", m_solution4[0][0]);
               } else{
                  printf("     |");
                }
                if (masque_m4[0][1]==1) {
                    printf("  %d  |", m_solution4[0][1]);
                } else{
                    printf("     |");
                }
                if (masque_m4[0][2]==1) {
                    printf("  %d  |",m_solution4[0][2]);
                } else{
                    printf("     |");
                }
                if (masque_m4[0][3]==1) {
                    printf("  %d  |\n",m_solution4[0][3]);
                } else{
                    printf("     |\n");
                }


                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  2  |");

                if (masque_m4[1][0]==1) {
                    printf("  %d  |", m_solution4[1][0]);
                } else{
                printf("     |");
              }
              if (masque_m4[1][1]==1) {
                    printf("  %d  |", m_solution4[1][1]);
              } else{
               printf("     |");
             }
             if (masque_m4[1][2]==1) {
                    printf("  %d  |",m_solution4[1][2]);
              } else{
               printf("     |");
             }
               if (masque_m4[1][3]==1) {
                    printf("  %d  |\n",m_solution4[1][3]);
               } else{
                   printf("     |\n");
               }



                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  3  |");

                if (masque_m4[2][0]==1) {
                    printf("  %d  |", m_solution4[2][0]);
             } else{
                printf("     |");
               }
               if (masque_m4[2][1]==1) {
                    printf("  %d  |", m_solution4[2][1]);
               } else{
               printf("     |");

             }
               if (masque_m4[2][2]==1) {
                    printf("  %d  |",m_solution4[2][2]);
              } else{
                printf("     |");
              }
              if (masque_m4[2][3]==1) {
                    printf("  %d  |\n",m_solution4[2][3]);
              } else{
                  printf("     |\n");
              }

                printf("|-----|-----|-----|-----|-----|\n");
                printf("|  4  |");
               if (masque_m4[3][0]==1) {
                    printf("  %d  |", m_solution4[3][0]);
             } else{
                   printf("     |");
               }
             if (masque_m4[3][1]==1) {
                    printf("  %d  |", m_solution4[3][1]);
            } else{
              printf("     |");
            }
            if (masque_m4[3][2]==1) {
                    printf("  %d  |",m_solution4[3][2]);
              } else{
               printf("     |");
               }
             if (masque_m4[3][3]==1) {
                  printf("  %d  |\n",m_solution4[3][3]);
           } else{
             printf("     |\n");
            }



                printf("|_____|_____|_____|_____|_____|\n");
                fill_matrice_joueur4(jouer[4][4],masque_m4[4][4],m_solution4[4][4]);


           //   Jouer(jouer[4][4],masque_m4[4][4],m_solution4[4][4]);





            } else if (taille_m==2) {
                printf("\n");
                // Forme matrice 8X8
                printf("_______________________________________________________\n");
                printf("|     |  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |\n");
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  1  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  2  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  3  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  4  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  5  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  6  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  7  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
                printf("|  8  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |  %d  |\n", 0, 0, 0, 0, 0, 0, 0, 0);
                printf("|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");


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


void solution(int m2d[4][4],int* m1,int *m2,int* m3,int* m4,int taille) {
    int j = 0, i = 0;

    for (j; j < taille; j++) {
        i = 0;
        m2d[i][j] = m1[j];
        i++;
        m2d[i][j] = m2[j];
        i++;
        m2d[i][j] = m3[j];
        i++;
        m2d[i][j] = m4[j];
        i++;
    }

}

void Jouer(int matrice_joueur[4][4],int matrice_masque[4][4],int matrice_solution[4][4]){
    int run=1,ligne,colonne_val,remplis_case,mat_rempli;
    char colonne_entry;

    printf("Debut du Jeu\n");

    while (run==1){

        printf("\n");

        do {
            printf("Vous allez choisir une case a remplir \n");

            do {
                printf("Num%cro de la ligne (1 %c 4) :", 130, 133);
                scanf("%d", &ligne);
            } while (ligne < 1 || ligne > 4);

            printf("\n");

            do {

                printf("Num%cro de la colonne (A %c D) :", 130, 133);
                getchar();
                scanf("%c", &colonne_entry);
            } while (colonne_entry < 65 || colonne_entry > 68);

            printf("Vous avez choissi la ligne %d et la colone %c", ligne, colonne_entry);
            if (colonne_entry == 'A') {
                colonne_val = 1;
            } else if (colonne_entry == 'B') {
                colonne_val = 2;
            } else if (colonne_entry == 'C') {
                colonne_val = 3;
            } else if (colonne_entry == 'D') {
                colonne_val = 4;
            }
            printf("\n");

            if (matrice_joueur[ligne][colonne_val]!=-1){
                printf("La case est deja rempli !!! \n");
                printf("\n");
            }
        } while (matrice_joueur[ligne][colonne_val]!=-1);





        do {
            printf("\n");
            printf("Remplir la case [%d][%c] avec un 1 ou 0 :",ligne,colonne_entry);
            scanf("%d",&remplis_case);
            printf("\n");
        } while (remplis_case>1 || remplis_case<0);


        mat_rempli = fill_(matrice_joueur[4][4]);

        if (mat_rempli==0){
            run = 0;
        }





    }


}

void fill_matrice_joueur4(int matrice[4][4],int masque[4][4],int solution[4][4] ){
    for (int i =0;i<4;i++){
        for (int j=0;j<4;j++){
            if (masque[i][j]==1){
                matrice[i][j]=solution[i][j];
            } else{
                matrice[i][j]= -1;
            }
        }
    }
}

int fill_(int matrice[4][4]){
    for (int i =0;i<4;i++){
        for (int j=0;j<4;j++){
            if (matrice[i][j]==-1){
                return 1;
            }
        }
    }
    return 0;
}