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

int ** solution4(int** m2d,int* m1,int* m2,int *m3,int *m4,int taille);

int **solution8(int** m2d,int* m1,int* m2,int *m3,int *m4,int *m5,int *m6 ,int * m7,int*m8,int taille);

void Jouer4(int **matrice_joueur,int **matrice_masque,int **matrice_solution);

int** fill_matrice_joueur(int **matrice,int** masque,int** solution ,int taille);

int fill_(int** matrice);

void afficher_grille(int **matrice_masque,int  **matrice_solution,int taille);

int sommeligne(int ** matrice,int taille,int ligne,int taille_m);

int sommecolonne(int **matrice,int taille,int colonne,int taille_m);

void Jouer8(int** matrice_joueur,int **matrice_masque,int **matrice_solution);

int **matrice8x8(int **m_solution);

#endif //TAKUZUEFREI_FONCTIONS_RESOUDRES_H
