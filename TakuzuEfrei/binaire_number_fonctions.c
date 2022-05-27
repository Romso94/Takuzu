//   Takuzu Projet C 
//  Ce fichier permets de générer les matrices en convertissant des valeurs en binaire
//
#include <stdio.h>
#include "binaire_number_fonctions.h"



int puissance(int b, int e)                     // Calcul de b à la puissance e
{
    if (e==0) {
        return 1;
    } else if (b==0) {
        return 0;
    } else {
        return b*puissance(b,e-1);
    }
}

int binaire_to_decimal(int *tab, int indice) {      //Convertit un nombre binaire en un nombre décimal
    /*  Remplir le tableau binaire en inversant, car la fonction lit de gauche à droite */
    int*p = tab;
    if (indice == -1) {
        return 0;
    } else {
        if ((p[indice]) == 1) {
            return puissance(2,indice) + binaire_to_decimal(tab, indice - 1);
        } else {
            return  binaire_to_decimal(tab, indice - 1);
        }
    }
}

void decimal_to_binaire(int *T, int val){   // Convertit un nombre décimal en binaire
    int i=0;
    while (val!=0){
        T[i] = val%2;

        val = val/2;

        i++;
    }

    for (i;i<4;i++){
        T[i]=0;
    }
   // printf("\n %d\n",i);







    inverserTableau(T,i);

   //Lire le tableau
   /* for(int j=0;j<i;j++){
        printf("%d ",T[j]);
    }
    printf("\n"); */



}

void inverserTableau(int*T,int taille){ // Inverse un tableau donné
    int i,j,temp;
    for (i=0,j=taille-1;i<j;i++,j--){
        temp = T[i];
        T[i]=T[j];
        T[j]=temp;
    }
}

void decimal_to_binaire8(int *T,int val) { //Permets de convertir un nombre décimal en binaire sur 8 cases


    int i = 0;
    while (val != 0) {
        T[i] = val % 2;

        val = val / 2;

        i++;
    }
    for (i; i < 8; i++) {
        T[i] = 0;
    }

    inverserTableau(T, 8);
}
