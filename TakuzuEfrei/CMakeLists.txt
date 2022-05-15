cmake_minimum_required(VERSION 3.21)
project(TakuzuEfrei C)

set(CMAKE_C_STANDARD 99)

add_executable(TakuzuEfrei main.c fonctions_resoudres.c fonctions_resoudres.h fonctions_main.c fonctions_main.h fonction_generer_solution.c fonction_generer_solution.h binaire_number_fonctions.h binaire_number_fonctions.c fonctions_generer_masque.c fonctions_generer_masque.h generer.c generer.h)
