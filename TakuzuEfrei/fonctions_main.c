//
// Created by Romai on 01/04/2022.
//

#include "fonctions_main.h"

#include <stdio.h>
#include <unistd.h>

void choix_joueur(){

    /* Mettre sleep(2); */
    printf("Pour acc%cder aux r%cgles entrez : regles \n",130,138);


    printf("Pour r%csoudre une grille entrez : resoudre \n",130);


    printf("Pour r%csoudre une grille automatiquement entrez : auto \n",130);


    printf("Pour g%cn%crer une grille entrez : generer \n",130,130);


    printf("Votre choix : ");
}



void regles(){
    printf("R%cgles num%cros 1 : Dans une ligne, il doit y avoir autant de 0 que de 1            \n",138,130);
    printf("R%cgles num%cros 2 : Dans une colonne, il doit y avoir autant de 0 que de 1          \n",138,130);
    printf("R%cgles num%cros 3 : Il ne peut pas y avoir deux lignes identiques dans une grille   \n",138,130);
    printf("R%cgles num%cros 4 : Il ne peut pas y avoir deux colonnes identiques dans une grille \n",138,130);
    printf("R%cgles num%cros 5 : Dans une ligne ou une colonne, il ne peut y avoir plus de deux 0 ou deux 1 %c la suite \n"
           "(on ne peut pas avoir trois 0 de suite ou trois 1 de suite) \n",138,130,133);
}