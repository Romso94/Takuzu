//Takuzu Projet C : Florian Poscente / Gas Romain
//  Ce fichier permets de générer les matrices solutions
//
//
#include "fonction_generer_solution.h"
#include "binaire_number_fonctions.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void nbr_ale_4x(int*t1,int*t2,int*t3,int*t4){ // Permets de remplir 4 tableaux avec des nombres binaires sur 4 cases
    srand(time(NULL));
    int j=0;
    int t[4],nbr_a_choisir[6] = {3,5,6,9,10,12} ;
    while (j<4){

        int x = rand() %6;
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

void nbr_ale_8x(int*t1,int*t2,int*t3,int*t4,int*t5,int*t6,int*t7,int*t8) { // Permets de remplir _ tableaux avec des nombres binaires sur 8 cases
    srand(time(NULL));
    int j=0;
    int t[8],nbr_a_choisir[34] = {43,45,51,53,54,75,77,83,85,86,89,90,101,102,105,106,108,147,149,150,153,154,165,166,169,170,172,178,180,201,202,204,210,212,} ;
    while (j<8){

        int x = rand() %34 ;
        //printf("nombre aleatoire : %d\n",x);
        int val = nbr_a_choisir[x];
        int present = verife(val,t,j);
        if (present==0){
            t[j]=val;
            j++;
        }

    }

    decimal_to_binaire8(t1,t[0]);

    decimal_to_binaire8(t2,t[1]);

    decimal_to_binaire8(t3,t[2]);

    decimal_to_binaire8(t4,t[3]);

    decimal_to_binaire8(t5, t[4]);

    decimal_to_binaire8(t6,t[5]);

    decimal_to_binaire8(t7,t[6]);

    decimal_to_binaire8(t8,t[7]);




}

void lire_tableau(int* tableau,int taille){  // Permets de lire le tableau
    for(int i=0 ;i<taille;i++)
    {
        printf("%d\t",tableau[i]);

    }
}

int verife(int val, int *T,int taille_liste){ // Permets de vérifier si une valeur est présente dans un tableau

    for(int i=0 ;i<taille_liste;i++)
    {
        if (val== T[i]) {
            return 1;
        }


    }
    return 0;

}


int verif_colonne4(int *T1,int *T2,int *T3,int *T4,int taille){ // Verifie si la somme des elements dans la colonne est différente de 2

    for(int i=0;i<taille;i++){
        int somme = 0;
        somme += T1[i] + T2[i] + T3[i] + T4[i];
        if (somme!=2){
            return 1;
        }
    }
    return 0;

}

int verif_colonne8(int *T1,int *T2,int *T3,int *T4,int *T5,int * T6,int *T7,int *T8, int taille){ // Verifie si la somme des elements dans la colonne est différente de 4
    for(int i=0;i<taille;i++){
        int somme = 0;
        somme += T1[i] + T2[i] + T3[i] + T4[i]+ T5[i] + T6[i] + T7[i] + T8[i];
        if (somme!=4){
            return 1;
        }
    }
    return 0;

}
