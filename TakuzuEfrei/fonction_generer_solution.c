//
// Created by Flo on 06/04/2022.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "fonction_generer_solution.h"
#include <stdbool.h>

void nbr_ale_4x(){
    srand(time(NULL));
    int j=0;
    int t[4] ;
    while (j<4) {

        int x = rand() %16 ;
        printf("%d \n",x);
        int liste[5] = {0, 1, 7, 8, 14, 15};
        int nbr_interdit = verife(x, liste, 6);
        int nbr_not_in_t = verife(x,t,4);

        if (nbr_interdit == false && nbr_not_in_t == false) {
            t[j]=x;
            j++;
        }
    }
    lire_tableau(t,4);

}

void lire_tableau(int* tableau,int taille){
    for(int i=0 ;i<taille;i++)
    {
        printf("%d\n",tableau[i]);

    }
}

int verife(int val, int *T,int taille_liste){

    for(int i=0 ;i<taille_liste;i++)
    {
        if (val!= T[i]) {
            return true;
        }
        return false;

    }

}