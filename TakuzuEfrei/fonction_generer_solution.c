//
// Created by Flo on 06/04/2022.
//
#include "fonction_generer_solution.h"
#include "binaire_number_fonctions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include <stdbool.h>

void nbr_ale_4x(int*t1,int*t2,int*t3,int*t4){
    srand(time(NULL));
    int j=0;
    int t[4],nbr_a_choisir[9] = {2,3,4,5,6,9,10,12,13} ;
    while (j<4){

        int x = rand() %10 ;
        //printf("nombre aleatoire : %d\n",x);
        int val = nbr_a_choisir[x];
        int present = verife(val,t,j);
        if (present==0){
            t[j]=val;
            j++;
        }

    }

    decimal_to_binaire(t1,t[0]);

    decimal_to_binaire(t2,t[1]);

    decimal_to_binaire(t3,t[2]);

    decimal_to_binaire(t4,t[3]);



}

void lire_tableau(int* tableau,int taille){
    for(int i=0 ;i<taille;i++)
    {
        printf("%d\t",tableau[i]);

    }
}

int verife(int val, int *T,int taille_liste){

    for(int i=0 ;i<taille_liste;i++)
    {
        if (val== T[i]) {
            return 1;
        }


    }
    return 0;

}


int verif_colonne(int *T1,int *T2,int *T3,int *T4,int taille){

    for(int i=0;i<taille;i++){
        int somme = 0;
        somme += T1[i] + T2[i] + T3[i] + T4[i];
        if (somme!=2){
            return 1;
        }
    }
    return 0;

}