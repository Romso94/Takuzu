Poscente Florian  / Gas Romain 
On clique sur Run.

Un menu s'affiche avec 4 choix possibles.

- Pour accéder aux règles on rentre dans la console "regles". Les règles s'affichent et le menu apparait à nouveau.


-Pour résoudre une grille on rentre dans la console "resoudre". Puis une option s'affiche pour choisir la taille.
On rentre 1 dans la console pour la grille 4x4 par exemple. Une nouvelle option s'affiche pour générer le masque.
Nous pouvons choisir de générer manuellement ou automatiquement le masque.

Si l'on rentre 1 dans la console, nous allons devoir remplir le masque nous même en saisissant 1 pour afficher les valeurs et 0 pour ne pas les afficher.
Nous allons devoir remplir chaque case de la matrice jusqu'à obtenir le masque. Ensuite nous pouvons jouer, et remplir les espaces vides. Pour cela, on nous demande le numéro de ligne, le numéro de colonne et si l'on souhaite rentrer un 1 ou 0.
Si le résultat est bon c'est affiché sinon on perd une vie.


Si l'on rentre 2 dans la console, un masque va se générer automatiquement et nous pouvons directement jouer comme précédemment vu.


-Si nous relançons notre programme et rentrons dans la console "auto". Nous devons choisir une taille, 4 ou 8.Si nous choisissons par exemple 4, un masque d'une grille 4x4 va se créer aléatoirement et se remplir tout seul jusqu'a atteindre la grille solution.

-Si nous relançons notre programme et rentrons dans la console "generer". Nous devons choisir une taille. Si nous rentrons 4 dans la console une grille solution apparait.




/!\ POUR GENERER AUTOMATIQUEMENT UNE GRILLE 8x8  Etapes a suivre /!\:

-Mettre en commentaire la ligne 153 du fichier fonctions_resoudre.c
-Enlever les commentaires de la lignes : 143 à 151 et la ligne 221
