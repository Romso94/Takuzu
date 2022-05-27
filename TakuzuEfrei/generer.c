//Takuzu Projet C 
//  Ce fichier permets de générer une matrice solution 4x4 ou 8x8 et l'afficher
//

#include "generer.h"
#include "fonctions_main.h"
#include "fonction_generer_solution.h"
#include "fonctions_resoudres.h"
#include <stdio.h>


void generer(int taille){ // Génère une grille solution taillextaille (4x4 ou 8x8) et affiche la solution
    int **m_solution = generer_matrice(taille, m_solution), ligne_1[8], ligne_2[8], ligne_3[8], ligne_4[8],ligne_5[8],ligne_6[8],ligne_7[8],ligne_8[8];
    int **m_masque = generer_matrice1(taille, m_masque);
    int verif_colon;

    if (taille==4){

        printf("\n");
        printf("Chargement de la Matrice 4x4...");


        do {
            nbr_ale_4x(ligne_1, ligne_2, ligne_3, ligne_4); // La fonction nbr_ale_4x permets de récupérer 4 valeurs binaires dans 4 tableaux
            verif_colon = verif_colonne4(ligne_1, ligne_2, ligne_3, ligne_4,4); // Verification des colonnes avec leurs sommes qui ne doivent pas dépasser 2
            } while (verif_colon == 1);

        printf("\n");

        m_solution = solution4(m_solution, ligne_1, ligne_2, ligne_3, ligne_4, 4); // Rassemble les 4 tableaux dans une seule matrice


        afficher_grille(m_masque,m_solution,4);


    }else if (taille==8){
        printf("\n");
        printf("Chargement de la Matrice 8x8...");


        do {
            nbr_ale_8x(ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8); // La fonction nbr_ale_8x permets de récupérer 4 valeurs binaires dans 4 tableaux
            verif_colon = verif_colonne8(ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8,8);  // Verification des colonnes avec leurs sommes qui ne doivent pas dépasser 4
        } while (verif_colon == 1);

        printf("\n");

        m_solution = solution8(m_solution, ligne_1, ligne_2, ligne_3, ligne_4,ligne_5,ligne_6,ligne_7,ligne_8,8); // Rassemble les 8 tableaux dans une seule matrice


        afficher_grille(m_masque,m_solution,8);


    }


}
