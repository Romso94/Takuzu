// Takuzu Projet C : Florian Poscente / Gas Romain
// Ce fichier permets d'afficher les regles et générer les matrices 2D
//
//

#include "fonctions_main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void choix_joueur(){
    // Permets d'afficher le menu de départ
    sleep(2);
    printf("Pour acc%cder aux r%cgles entrez : regles \n",130,138);


    printf("Pour r%csoudre une grille entrez : resoudre \n",130);


    printf("Pour r%csoudre une grille automatiquement entrez : auto \n",130);


    printf("Pour g%cn%crer une grille entrez : generer \n",130,130);


    printf("Votre choix : ");
}



void regles(){          //Affiche les regles
    printf("R%cgles num%cros 1 : Dans une ligne, il doit y avoir autant de 0 que de 1            \n",138,130);
    printf("R%cgles num%cros 2 : Dans une colonne, il doit y avoir autant de 0 que de 1          \n",138,130);
    printf("R%cgles num%cros 3 : Il ne peut pas y avoir deux lignes identiques dans une grille   \n",138,130);
    printf("R%cgles num%cros 4 : Il ne peut pas y avoir deux colonnes identiques dans une grille \n",138,130);
    printf("R%cgles num%cros 5 : Dans une ligne ou une colonne, il ne peut y avoir plus de deux 0 ou deux 1 %c la suite \n"
           "(on ne peut pas avoir trois 0 de suite ou trois 1 de suite) \n",138,130,133);
}


int** generer_matrice(int taille, int** Matrice){           //Permets d'initialiser un tableau 2D avec des 0
    int i =0;
    Matrice = (int**) malloc(taille * sizeof(int*));
    for(i;i<taille;i++){
        *(Matrice+i) = (int*) malloc(taille * sizeof(int));
    }
    return Matrice;
}

int** generer_matrice1(int taille, int** Matrice){          //Permets d'initialiser un tableau 2D avec des 1
    int i =0;
    Matrice = (int**) malloc(taille * sizeof(int*));
    for(i;i<taille;i++){
        *(Matrice+i) = (int*) malloc(taille * sizeof(int));
        for(int j=0;j<taille;j++){
            Matrice[i][j] = 1;
        }
    }

    return Matrice;
}