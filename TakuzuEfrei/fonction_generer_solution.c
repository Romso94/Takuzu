//
// Created by Flo on 06/04/2022.
//
#include <stdio.h>

#include <stdlib.h>
#include "fonction_generer_solution.h"

void nbr_ale(){
    srand(3);
    int x = rand()%16;
    int liste = {0, 1, 7, 8, 14, 15};

    int boolen = verife(x,liste);
    if x


}

int verife(int val, int *T){

    for(int i=0 ;i<6;i++)
    {
        if (val!= T[i])
        {
            return 1;
        }
        else;
        {
            return 0;
        }
    }

}