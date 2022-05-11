//
// Created by Romai on 01/04/2022.
//

#ifndef TAKUZUEFREI_FONCTIONS_RESOUDRES_H
#define TAKUZUEFREI_FONCTIONS_RESOUDRES_H
typedef enum  {
    A,B,C,D,E,F,G,H
}colonne;

void resoudre();

int taille();


void solution(int m2d[4][4],int* m1,int* m2,int *m3,int *m4,int taille);

void Jouer(int matrice_masque[4][4],int matrice_solution[4][4]);

void fill_matrice_joueur4(int matrice[4][4],int masque[4][4],int solution[4][4] );


#endif //TAKUZUEFREI_FONCTIONS_RESOUDRES_H
