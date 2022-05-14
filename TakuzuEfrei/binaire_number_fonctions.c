//
// Created by Romai on 04/04/2022.
//
#include <stdio.h>
#include "binaire_number_fonctions.h"


/*  Remplir le tableau binaire en inversant car fonction lit de gauche a droite */
int puissance(int b, int e)
{
    if (e==0) {
        return 1;
    } else if (b==0) {
        return 0;
    } else {
        return b*puissance(b,e-1);
    }
}

int binaire_to_decimal(int *tab, int indice) {
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

void decimal_to_binaire(int *T, int val){
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

void inverserTableau(int*T,int taille){
    int i,j,temp;
    for (i=0,j=taille-1;i<j;i++,j--){
        temp = T[i];
        T[i]=T[j];
        T[j]=temp;
    }
}