//
// Created by Romai on 01/04/2022.
//
#include <unistd.h>
#include "fonctions_resoudres.h"
#include "fonction_generer_solution.h"
#include "fonctions_generer_masque.h"
#include <stdio.h>
#include <stdlib.h>
#include "fonctions_main.h"


void resoudre() {
    int choix, masque, masque_manu;
    int taille_m, verif_colon;
    colonne a;


    printf("\n");
    printf("Pour commencer veuillez choisir la taille de la matrice :  \n");


    taille_m = taille();


    do {
        printf("\n");
        printf("Choisir une options pour g%cn%crer le masque :  \n", 130, 130);
        printf("1. Manuellement  \n");
        printf("2. Automatiquement  \n");
        printf("Choix : ");
        scanf("%d", &masque);
    } while (masque > 2 || masque < 1);


    if (taille_m == 1) {
        int **masque_m = generer_matrice(4, masque_m);
        int **m_solution = generer_matrice(4, m_solution), ligne_1[4], ligne_2[4], ligne_3[4], ligne_4[4];
        int **jouer = generer_matrice(4, jouer);


        printf("\n");

        printf("Chargement de la Matrice ...");


        do {
            nbr_ale_4x(ligne_1, ligne_2, ligne_3, ligne_4);
            verif_colon = verif_colonne4(ligne_1, ligne_2, ligne_3, ligne_4, 4);

        } while (verif_colon == 1);



        if (masque == 2) {
            masque_m = generer_masque(masque_m,4);

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
                        if (masque_m[i][j]==0){
                            masque_m[i][j] =-1;
                        } else{
                            masque_m[i][j] = masque_manu;}

                    } while (masque_manu < 0 || masque_manu > 1);
                }

            }
        }


        m_solution = solution4(m_solution, ligne_1, ligne_2, ligne_3, ligne_4, 4);

        /* Forme matrice 4X4 */


        afficher_grille( masque_m,m_solution,4);



        jouer = fill_matrice_joueur(jouer, masque_m, m_solution,4);

        Jouer4(jouer,masque_m,m_solution);













    }

    else if (taille_m == 2) {
        int **masque_m = generer_matrice(8, masque_m);
        int **m_solution = generer_matrice(8, m_solution), ligne_1[8], ligne_2[8], ligne_3[8], ligne_4[8],ligne_5[8],ligne_6[8],ligne_7[8],ligne_8[8];
        int **jouer = generer_matrice(8, jouer);

        printf("\n");

        printf("Chargement de la Matrice ...");
        /*
        do {
            nbr_ale_8x(ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8);
            verif_colon = verif_colonne8(ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8, 8);



        } while (verif_colon == 1);
        */

        m_solution = matrice8x8(m_solution);

        if (masque == 2) {
            masque_m = generer_masque(masque_m,8);
        } else {
            printf("\n");
            printf("\n");
            printf("Vous allez remplir vous meme le masque  \n");

            for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
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
                            case E: {
                                printf("[D] : ");
                                break;
                            }
                            case F: {
                                printf("[D] : ");
                                break;
                            }
                            case G: {
                                printf("[D] : ");
                                break;
                            }
                            case H: {
                                printf("[D] : ");
                                break;
                            }



                        }

                        scanf("%d", &masque_manu);
                        if (masque_m[i][j]==0){
                            masque_m[i][j] =-1;
                        } else{
                        masque_m[i][j] = masque_manu;}

                    } while (masque_manu < 0 || masque_manu > 1);
                }

            }
        }
     //   m_solution = solution8(m_solution, ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8, 8);

        afficher_grille( masque_m,m_solution,8);

        jouer = fill_matrice_joueur(jouer, masque_m, m_solution,8);

        Jouer8(jouer,masque_m,m_solution);


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

        }
        case 2:{
            return 2;
        }
        default:{
            taille();
        }

    }

}


int ** solution4(int** m2d,int* m1,int *m2,int* m3,int* m4,int taille) {
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
    return m2d;
}


int **solution8(int** m2d,int* m1,int* m2,int *m3,int *m4,int *m5,int *m6 ,int * m7,int*m8,int taille){
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

    m2d[i][j] = m5[j];
    i++;

    m2d[i][j] = m6[j];
    i++;

    m2d[i][j] = m7[j];
    i++;

    m2d[i][j] = m8[j];
    i++;

    }
    return m2d;

}






int ** fill_matrice_joueur(int **matrice,int** masque,int** solution ,int taille){

    for (int i =0;i<taille;i++){

        for (int j=0;j<taille;j++){

            if (masque[i][j]==1){
                matrice[i][j]= solution[i][j];
            } else{
                matrice[i][j]= -1;
            }

        }
    }
    return matrice;
}

int fill_(int **matrice){
    for (int i =0;i<4;i++){
        for (int j=0;j<4;j++){
            if (matrice[i][j]==-1){
                return 1;
            }
        }
    }
    return 0;
}


void Jouer4(int** matrice_joueur,int **matrice_masque,int **matrice_solution) {
    int run = 1, ligne, colonne_val, remplis_case, mat_rempli,hp=3,sum,col;
    char colonne_entry;

    printf("Debut du Jeu\n");

    while (run == 1) {

        printf("\n");


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
        } else if(colonne_entry == 'D') {
            colonne_val = 4;
        }

        ligne -= 1;
        colonne_val -=1;
        printf("\n");


        if (matrice_joueur[ligne][colonne_val] != -1) {
            printf("\n");
            printf("La case est deja rempli !!! \n");
            printf("\n");
            sleep(2);
        }
        else {


            do {
                printf("\n");
                printf("Remplir la case [%d][%c] avec un 1 ou 0 :", ligne, colonne_entry);
                scanf("%d", &remplis_case);
                printf("\n");
            } while (remplis_case > 1 || remplis_case < 0);

            if (matrice_solution[ligne][colonne_val] == remplis_case) {
                printf("\n");
                printf("Coup Valide, Bien jou%c\n", 130);
                sleep(2);
                matrice_joueur[ligne][colonne_val] = remplis_case;
                matrice_masque[ligne][colonne_val] = remplis_case;

            } else{
                matrice_joueur[ligne][colonne_val] = remplis_case;
                sum = sommeligne(matrice_joueur,4,ligne,4);
                col = sommecolonne(matrice_joueur,4,colonne_val,4);
                if (sum>2|| col>2){
                    printf("\n");
                    printf("Coup Invalide, vous perdez une vie\n");
                    hp -=1;
                    if (sum>2) {
                        printf("Il y avait deja 2 nombre : %d dans la ligne %d\n",remplis_case,ligne+1);
                        sleep(2);
                        printf("Essayez l'autre possibilit%c\n",130);
                        sleep(2);
                    } else if(col>2){
                        printf("Il y avait deja 2 nombre : %d dans la colonne %d\n",remplis_case,colonne_val+1);
                        sleep(2);
                        printf("Essayez l'autre possibilit%c\n",130);
                        sleep(2);
                    }
                    printf("Il vous reste %d vie\n", hp);
                    sleep(2);

                } else{
                    printf("\n");
                    printf("Coup Valide, Malheureusement ce n'est pas la solution\n");
                    printf("Vous ne perdez pas de Vie\n");
                    printf("Il vous reste %d vie\n", hp);
                    sleep(3);

                }
                matrice_joueur[ligne][colonne_val] = -1;
            }
        }


        mat_rempli = fill_(matrice_joueur);

        if (mat_rempli == 0 ) {
            run = 0;
            printf("\n");
            printf("Bravo Vous avez GAGNE !!!!!!!\n");
            sleep(3);

        } else if (hp==0){
            run = 0;
            printf("\n");
            printf("Vous avez perdu ! Dommage ! R%cessayer en relancent le programme !\n",130);
            sleep(3);
            break;
            // Afficher la solution
        }

        afficher_grille(matrice_masque, matrice_solution,4);

    }

}


void afficher_grille(int **matrice_masque, int **matrice_solution,int taille){

    if (taille==4){
    printf("\n");
    printf("_______________________________\n");

    printf("|     |  A  |  B  |  C  |  D  |\n");


    printf("|-----|-----|-----|-----|-----|\n");


    printf("|  1  |");


    if (matrice_masque[0][0]>=1) {
        printf("  %d  |", matrice_solution[0][0]);
    } else{
        printf("     |");
    }

    if (matrice_masque[0][1]>=0) {
        printf("  %d  |", matrice_solution[0][1]);
    } else{

        printf("     |");
    }

    if (matrice_masque[0][2]>=0) {
        printf("  %d  |",matrice_solution[0][2]);
    } else{
        printf("     |");
    }

    if (matrice_masque[0][3]>=0) {
        printf("  %d  |\n",matrice_solution[0][3]);
    } else{
        printf("     |\n");
    }
        printf("|-----|-----|-----|-----|-----|\n");

        printf("|  2  |");


    if (matrice_masque[1][0]>=0) {
        printf("  %d  |", matrice_solution[1][0]);
    } else{
        printf("     |");
    }

    if (matrice_masque[1][1]>=0) {
        printf("  %d  |", matrice_solution[1][1]);
    } else{
        printf("     |");
    }

    if (matrice_masque[1][2]>=0) {
        printf("  %d  |",matrice_solution[1][2]);
    } else{
        printf("     |");
    }

    if (matrice_masque[1][3]>=0) {
        printf("  %d  |\n",matrice_solution[1][3]);
    } else{
        printf("     |\n");
    }



        printf("|-----|-----|-----|-----|-----|\n");

        printf("|  3  |");

    if (matrice_masque[2][0]>=0) {
        printf("  %d  |", matrice_solution[2][0]);
    } else{
        printf("     |");
    }


    if (matrice_masque[2][1]>=0) {
        printf("  %d  |", matrice_solution[2][1]);
    } else{
        printf("     |");

    }

    if (matrice_masque[2][2]>=0) {
        printf("  %d  |",matrice_solution[2][2]);
    } else{
        printf("     |");
    }

    if (matrice_masque[2][3]>=0) {
        printf("  %d  |\n",matrice_solution[2][3]);
    } else{
        printf("     |\n");
    }

        printf("|-----|-----|-----|-----|-----|\n");

        printf("|  4  |");


    if (matrice_masque[3][0]>=0) {
        printf("  %d  |", matrice_solution[3][0]);
    } else{
        printf("     |");
    }

    if (matrice_masque[3][1]>=0) {
        printf("  %d  |", matrice_solution[3][1]);
    } else{
        printf("     |");
    }

    if (matrice_masque[3][2]>=0) {
        printf("  %d  |",matrice_solution[3][2]);
    } else{
        printf("     |");
    }


    if (matrice_masque[3][3]>=0) {
        printf("  %d  |\n",matrice_solution[3][3]);
    } else{
        printf("     |\n");
    }



        printf("|_____|_____|_____|_____|_____|\n");
    }
    else if (taille==8){
        printf("\n");

        printf("_______________________________________________________\n");
        printf("|     |  A  |  B  |  C  |  D  |  E  |  F  |  G  |  H  |\n");
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  1  |");
        // PREMIERE LIGNE
        if (matrice_masque[0][0]>=1) {
            printf("  %d  |", matrice_solution[0][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[0][1]>=0) {
            printf("  %d  |", matrice_solution[0][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[0][2]>=0) {
            printf("  %d  |",matrice_solution[0][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[0][3]>=0) {
            printf("  %d  |",matrice_solution[0][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[0][4]>=1) {
            printf("  %d  |", matrice_solution[0][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[0][5]>=0) {
            printf("  %d  |", matrice_solution[0][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[0][6]>=0) {
            printf("  %d  |",matrice_solution[0][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[0][7]>=0) {
            printf("  %d  |\n",matrice_solution[0][7]);
        } else{
            printf("     |\n");
        }

        // DEUXIEME LIGNE
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  2  |");

        if (matrice_masque[1][0]>=1) {
            printf("  %d  |", matrice_solution[1][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[1][1]>=0) {
            printf("  %d  |", matrice_solution[1][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[1][2]>=0) {
            printf("  %d  |",matrice_solution[1][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[1][3]>=0) {
            printf("  %d  |",matrice_solution[1][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[1][4]>=1) {
            printf("  %d  |", matrice_solution[1][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[1][5]>=0) {
            printf("  %d  |", matrice_solution[1][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[1][6]>=0) {
            printf("  %d  |",matrice_solution[1][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[1][7]>=0) {
            printf("  %d  |\n",matrice_solution[1][7]);
        } else{
            printf("     |\n");
        }

        // TROISIEME LIGNE
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  3  |");

        if (matrice_masque[2][0]>=1) {
            printf("  %d  |", matrice_solution[2][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[2][1]>=0) {
            printf("  %d  |", matrice_solution[2][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[2][2]>=0) {
            printf("  %d  |",matrice_solution[2][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[2][3]>=0) {
            printf("  %d  |",matrice_solution[2][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[2][4]>=1) {
            printf("  %d  |", matrice_solution[2][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[2][5]>=0) {
            printf("  %d  |", matrice_solution[2][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[2][6]>=0) {
            printf("  %d  |",matrice_solution[2][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[2][7]>=0) {
            printf("  %d  |\n",matrice_solution[2][7]);
        } else {
            printf("     |\n");

        }

        // QUATRIEME LIGNE
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  4  |");

        if (matrice_masque[3][0]>=1) {
            printf("  %d  |", matrice_solution[3][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[3][1]>=0) {
            printf("  %d  |", matrice_solution[3][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[3][2]>=0) {
            printf("  %d  |",matrice_solution[3][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[3][3]>=0) {
            printf("  %d  |",matrice_solution[3][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[3][4]>=1) {
            printf("  %d  |", matrice_solution[3][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[3][5]>=0) {
            printf("  %d  |", matrice_solution[3][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[3][6]>=0) {
            printf("  %d  |",matrice_solution[3][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[3][7]>=0) {
            printf("  %d  |\n",matrice_solution[3][7]);
        } else {
            printf("     |\n");

        }

        // CINQUIEME LIGNE

        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  5  |");

        if (matrice_masque[4][0]>=1) {
            printf("  %d  |", matrice_solution[4][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[4][1]>=0) {
            printf("  %d  |", matrice_solution[4][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[4][2]>=0) {
            printf("  %d  |",matrice_solution[4][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[4][3]>=0) {
            printf("  %d  |",matrice_solution[4][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[4][4]>=1) {
            printf("  %d  |", matrice_solution[4][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[4][5]>=0) {
            printf("  %d  |", matrice_solution[4][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[4][6]>=0) {
            printf("  %d  |",matrice_solution[4][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[4][7]>=0) {
            printf("  %d  |\n",matrice_solution[4][7]);
        } else {
            printf("     |\n");

        }

        // SIXIEME LIGNE

        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  6  |");

        if (matrice_masque[5][0]>=1) {
            printf("  %d  |", matrice_solution[5][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[5][1]>=0) {
            printf("  %d  |", matrice_solution[5][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[5][2]>=0) {
            printf("  %d  |",matrice_solution[5][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[5][3]>=0) {
            printf("  %d  |",matrice_solution[5][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[5][4]>=1) {
            printf("  %d  |", matrice_solution[5][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[5][5]>=0) {
            printf("  %d  |", matrice_solution[5][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[5][6]>=0) {
            printf("  %d  |",matrice_solution[5][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[5][7]>=0) {
            printf("  %d  |\n",matrice_solution[5][7]);
        } else {
            printf("     |\n");

        }

        // SEPTIEME LIGNE
        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  7  |");

        if (matrice_masque[6][0]>=1) {
            printf("  %d  |", matrice_solution[6][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[6][1]>=0) {
            printf("  %d  |", matrice_solution[6][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[6][2]>=0) {
            printf("  %d  |",matrice_solution[6][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[6][3]>=0) {
            printf("  %d  |",matrice_solution[6][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[6][4]>=1) {
            printf("  %d  |", matrice_solution[6][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[6][5]>=0) {
            printf("  %d  |", matrice_solution[6][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[6][6]>=0) {
            printf("  %d  |",matrice_solution[6][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[6][7]>=0) {
            printf("  %d  |\n",matrice_solution[6][7]);
        } else {
            printf("     |\n");

        }

        //HUITIEME LIGNE


        printf("|-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        printf("|  8  |");

        if (matrice_masque[7][0]>=1) {
            printf("  %d  |", matrice_solution[7][0]);
        } else{
            printf("     |");
        }

        if (matrice_masque[7][1]>=0) {
            printf("  %d  |", matrice_solution[7][1]);
        } else{

            printf("     |");
        }

        if (matrice_masque[7][2]>=0) {
            printf("  %d  |",matrice_solution[7][2]);
        } else{
            printf("     |");
        }

        if (matrice_masque[7][3]>=0) {
            printf("  %d  |",matrice_solution[7][3]);
        } else{
            printf("     |");
        }

        if (matrice_masque[7][4]==1) {
            printf("  %d  |", matrice_solution[7][4]);
        } else{
            printf("     |");
        }

        if (matrice_masque[7][5]>=0) {
            printf("  %d  |", matrice_solution[7][5]);
        } else{

            printf("     |");
        }

        if (matrice_masque[7][6]>=0) {
            printf("  %d  |",matrice_solution[7][6]);
        } else{
            printf("     |");
        }

        if (matrice_masque[7][7]>=0) {
            printf("  %d  |\n",matrice_solution[7][7]);
        } else {
            printf("     |\n");


        }
        printf("|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n");
    }
}


int sommeligne(int ** matrice,int taille,int ligne,int taille_m){
    int somme=0,zero=0;
        for (int i=0;i<taille;i++){
            if (matrice[ligne][i]!=-1) {
                somme += matrice[ligne][i];
                if (matrice[ligne][i]==0){
                    zero+=1;
                }
            }
        }
    if (zero>(taille/2)) {
        return 12;
    }
    return somme;
}

int sommecolonne(int **matrice,int taille,int colonne,int taille_m){
    int somme=0,zero=0;
    for (int i=0;i<taille;i++){
        if (matrice[i][colonne]!=-1){
            somme += matrice[i][colonne];
            if (matrice[i][colonne]==0){
                zero+=1;
            }
        }

    }
    if (zero>(taille/2)){
        return 12;
    }
    return somme;
}

void Jouer8(int** matrice_joueur,int **matrice_masque,int **matrice_solution) {
    int run = 1, ligne, colonne_val, remplis_case, mat_rempli,hp=3,sum,col;
    char colonne_entry;

    printf("Debut du Jeu\n");

    while (run == 1) {

        printf("\n");


        printf("Vous allez choisir une case a remplir \n");

        do {
            printf("Num%cro de la ligne (1 %c 8) :", 130, 133);
            scanf("%d", &ligne);
        } while (ligne < 1 || ligne > 8);


        printf("\n");

        do {

            printf("Num%cro de la colonne (A %c H) :", 130, 133);
            getchar();
            scanf("%c", &colonne_entry);
        } while (colonne_entry < 65 || colonne_entry > 72);

        printf("Vous avez choissi la ligne %d et la colone %c", ligne, colonne_entry);
        if (colonne_entry == 'A') {
            colonne_val = 1;
        } else if (colonne_entry == 'B') {
            colonne_val = 2;
        } else if (colonne_entry == 'C') {
            colonne_val = 3;
        } else if(colonne_entry == 'D') {
            colonne_val = 4;
        }else if(colonne_entry == 'E') {
            colonne_val = 5;
        }else if(colonne_entry == 'F') {
            colonne_val = 6;
        }else if(colonne_entry == 'G') {
            colonne_val = 7;
        }else if(colonne_entry == 'H') {
            colonne_val = 8;
        }

        ligne -= 1;
        colonne_val -=1;
        printf("\n");


        if (matrice_joueur[ligne][colonne_val] != -1) {
            printf("\n");
            printf("La case est deja rempli !!! \n");
            printf("\n");
            sleep(2);
        }
        else {


            do {
                printf("\n");
                printf("Remplir la case [%d][%c] avec un 1 ou 0 :", ligne, colonne_entry);
                scanf("%d", &remplis_case);
                printf("\n");
            } while (remplis_case > 1 || remplis_case < 0);

            if (matrice_solution[ligne][colonne_val] == remplis_case) {
                printf("\n");
                printf("Coup Valide, Bien jou%c\n", 130);
                sleep(2);
                matrice_joueur[ligne][colonne_val] = remplis_case;
                matrice_masque[ligne][colonne_val] = remplis_case;

            } else{
                matrice_joueur[ligne][colonne_val] = remplis_case;
                sum = sommeligne(matrice_joueur,8,ligne,8);
                col = sommecolonne(matrice_joueur,8,colonne_val,8);
                if (sum>4|| col>4){
                    printf("\n");
                    printf("Coup Invalide, vous perdez une vie\n");
                    hp -=1;
                    if (sum>4) {
                        printf("Il y avait deja 2 nombre : %d dans la ligne %d\n",remplis_case,ligne+1);
                        sleep(2);
                        printf("Essayez l'autre possibilit%c\n",130);
                        sleep(2);
                    } else if(col>4){
                        printf("Il y avait deja 2 nombre : %d dans la colonne %d\n",remplis_case,colonne_val+1);
                        sleep(2);
                        printf("Essayez l'autre possibilit%c\n",130);
                        sleep(2);
                    }
                    printf("Il vous reste %d vie\n", hp);
                    sleep(2);

                } else{
                    printf("\n");
                    printf("Coup Valide, Malheureusement ce n'est pas la solution\n");
                    printf("Vous ne perdez pas de Vie\n");
                    printf("Il vous reste %d vie\n", hp);
                    sleep(3);

                }
                matrice_joueur[ligne][colonne_val] = -1;
            }
        }


        mat_rempli = fill_(matrice_joueur);

        if (mat_rempli == 0 ) {
            run = 0;
            printf("\n");
            printf("Bravo Vous avez GAGNE !!!!!!!\n");
            sleep(3);

        } else if (hp==0){
            run = 0;
            printf("\n");
            printf("Vous avez perdu ! Dommage ! R%cessayer en relancent le programme !\n",130);
            sleep(3);
            break;
            // Afficher la solution
        }

        afficher_grille(matrice_masque, matrice_solution,8);

    }

}


int **matrice8x8(int **m_solution){


    m_solution[0][0]=1;
    m_solution[0][1]=0;
    m_solution[0][2]=1;
    m_solution[0][3]=1;
    m_solution[0][4]=0;
    m_solution[0][5]=1;
    m_solution[0][6]=0;
    m_solution[0][7]=0;

    m_solution[1][0]=1;
    m_solution[1][1]=0;
    m_solution[1][2]=1;
    m_solution[1][3]=0;
    m_solution[1][4]=1;
    m_solution[1][5]=0;
    m_solution[1][6]=0;
    m_solution[1][7]=1;

    m_solution[2][0]=0;
    m_solution[2][1]=1;
    m_solution[2][2]=0;
    m_solution[2][3]=1;
    m_solution[2][4]=1;
    m_solution[2][5]=0;
    m_solution[2][6]=1;
    m_solution[2][7]=0;


    m_solution[3][0]=0;
    m_solution[3][1]=1;
    m_solution[3][2]=0;
    m_solution[3][3]=1;
    m_solution[3][4]=0;
    m_solution[3][5]=1;
    m_solution[3][6]=1;
    m_solution[3][7]=0;

    m_solution[4][0]=1;
    m_solution[4][1]=0;
    m_solution[4][2]=1;
    m_solution[4][3]=0;
    m_solution[4][4]=0;
    m_solution[4][5]=1;
    m_solution[4][6]=0;
    m_solution[4][7]=1;

    m_solution[5][0]=0;
    m_solution[5][1]=1;
    m_solution[5][2]=0;
    m_solution[5][3]=0;
    m_solution[5][4]=1;
    m_solution[5][5]=0;
    m_solution[5][6]=1;
    m_solution[5][7]=1;

    m_solution[6][0]=0;
    m_solution[6][1]=0;
    m_solution[6][2]=1;
    m_solution[6][3]=1;
    m_solution[6][4]=0;
    m_solution[6][5]=1;
    m_solution[6][6]=1;
    m_solution[6][7]=0;

    m_solution[7][0]=1;
    m_solution[7][1]=1;
    m_solution[7][2]=0;
    m_solution[7][3]=0;
    m_solution[7][4]=1;
    m_solution[7][5]=0;
    m_solution[7][6]=0;
    m_solution[7][7]=1;

    return (m_solution);

}