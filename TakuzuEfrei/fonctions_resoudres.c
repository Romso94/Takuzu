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
    colonne4 a;


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

                if (masque==2){
                    generer_masque4(masque_m4);

                } else{
                    printf("\n");
                    printf("Vous allez remplir vous meme le masque  \n");

                    for (int i=0;i<4;i++){
                        for(int j=0;j<4;j++){
                            do {
                                printf("\n");
                                a=j;
                                printf("Choix 1 ou 0 pour la case [%d]",i+1);
                                switch (a) {

                                    case A:{
                                        printf("[A] : ");
                                        break;
                                    }

                                    case B:{
                                        printf("[B] : ");
                                        break;
                                    }

                                    case C:{
                                        printf("[C] : ");
                                        break;
                                    }

                                    case D:{
                                        printf("[D] : ");
                                        break;
                                    }


                                }

                                scanf("%d",&masque_manu);
                                masque_m4[i][j]=masque_manu;

                            } while (masque_manu<0 || masque_manu>1);
                        }

                    }


                        printf("\n");

                        printf("Chargement de la Matrice ...");
                 do{
                nbr_ale_4x(ligne_1,ligne_2,ligne_3,ligne_4);
                verif_colon = verif_colonne(ligne_1,ligne_2,ligne_3,ligne_4,4);

               } while (verif_colon==1);




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





            }/* else if (taille_m==2){
                printf("\n");
                 Forme matrice 8X8
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

            masque_auto();

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

void masque_auto(){

}

void solution(int m2d[4][4],int* m1,int *m2,int* m3,int* m4,int taille){
    int j=0,i=0;

    for (j;j<taille;j++){
        i=0;
        m2d[i][j]= m1[j];
        i++;
        m2d[i][j]=m2[j];
        i++;
        m2d[i][j]=m3[j];
        i++;
        m2d[i][j]=m4[j];
        i++;


    }

}