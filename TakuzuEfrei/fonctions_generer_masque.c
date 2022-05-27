//Takuzu Projet C 
//      Ce fichier permet de générer un masque pour les grilles solutions
//

#include "fonctions_generer_masque.h"
#include <stdlib.h>
#include <time.h>




int** generer_masque(int** matrice,int taille){ // Permets de générer un masque pour une grille / Le nombre de cases affiché est aléatoire

    srand(time(NULL));
    int x;
    for(int a=0;a<taille;a++){
        for (int b=0; b<taille;b++){
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



