//
// Created by Romai on 08/05/2022.
//

#include "fonctions_generer_masque.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>



int** generer_masque(int** matrice,int taille){

    srand(time(NULL));
    int j=0,x;
    for(int a=0;a<taille;a++){
        for (int b=0; b<4;b++){
            x = rand() % 14 + 1;

            if (x%3==1){
                matrice[a][b]=1;


            } else{
                matrice[a][b]=-1;

            }
        }

    }
    return matrice;

}

void affichermatrice(int** matrice){

    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){

            printf("Valeur en [%d][%d] : %d \n",i,j,matrice[i][j]);

        }

    }

}