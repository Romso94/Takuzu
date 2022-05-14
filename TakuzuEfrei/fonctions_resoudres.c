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
            verif_colon = verif_colonne(ligne_1, ligne_2, ligne_3, ligne_4, 4);

        } while (verif_colon == 1);



        if (masque == 2) {
            masque_m = generer_masque(masque_m);

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
                        masque_m[i][j] = masque_manu;

                    } while (masque_manu < 0 || masque_manu > 1);
                }

            }
        }


        m_solution = solution(m_solution, ligne_1, ligne_2, ligne_3, ligne_4, 4);

        /* Forme matrice 4X4 */


        afficher_grille( masque_m,m_solution,4);



        jouer = fill_matrice_joueur(jouer, masque_m, m_solution);

        Jouer4(jouer,masque_m,m_solution);













    } else if (taille_m == 2) {
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

        }
        case 2:{
            return 2;
        }
        default:{
            taille();
        }

    }

}


int ** solution(int** m2d,int* m1,int *m2,int* m3,int* m4,int taille) {
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









int ** fill_matrice_joueur(int **matrice,int** masque,int** solution ){

    for (int i =0;i<4;i++){

        for (int j=0;j<4;j++){

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
                sum = sommeligne(matrice_joueur,4,ligne);
                col = sommecolonne(matrice_joueur,4,colonne_val);
                if (sum>2|| col>2){
                    printf("\n");
                    printf("Coup Invalide, vous perdez une vie\n", 130);
                    hp -=1;
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
        }

        afficher_grille(matrice_masque, matrice_solution,4);

    }

}


void afficher_grille(int **matrice_masque, int **matrice_solution,int taille){
    printf("\n");
    printf("_______________________________\n");
    printf("|     |  A  |  B  |  C  |  D  |\n");
    printf("|-----|-----|-----|-----|-----|\n");
    printf("|  1  |");

    if (matrice_masque[0][0]==1) {
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


int sommeligne(int ** matrice,int taille,int ligne){
    int somme=0,zero=0;
        for (int i=0;i<taille;i++){
            if (matrice[ligne][i]!=-1) {
                somme += matrice[ligne][i];
                if (matrice[ligne][i]==0){
                    zero+=1;
                }
            }
        }
    if (zero>2) {
        return 3;
    }
    return somme;
}

int sommecolonne(int **matrice,int taille,int colonne){
    int somme=0,zero=0;
    for (int i=0;i<taille;i++){
        if (matrice[i][colonne]!=-1){
            somme += matrice[i][colonne];
            if (matrice[i][colonne]==0){
                zero+=1;
            }
        }

    }
    if (zero>2){
        return 3;
    }
    return somme;
}