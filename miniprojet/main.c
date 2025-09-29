
#include<stdio.h>
#include<stdlib.h>
#include "header.h"
int main(){
    int menu_choice ;
    int choice_recherch;
    do{
        printf("               MENU             \n");
         printf("1- Ajouter un avion \n");
        printf("2- Modifier un avion/modele/capacite/ statut.\n");
        printf("3- Supprimer un avion..\n");
        printf("4- Afficher la liste des avions\n");
        printf("5- Rechercher un avion par id ou par modele\n");
        printf("6- Quitter \n");
        printf("Enter Your choice :");
        scanf("%d" , &menu_choice);
       
       switch(menu_choice){
           case 1 :
           Ajouter_Avion() ;
           break;
           case 2 : 
           Modifier_Avion() ;
           break;
           case 3 :
           Supprimer_Avion();
           break;
           case 4 :
           Afficher_Avion();
           break;
           case 5:
         Rechercher_Avion();
         break;

            default : 
        printf(" Choix invalide, veuillez entrer un nombre entre 1 et 6.\n");
            // system("cls");
           }
        }
    
    while(menu_choice != 6);
    return 0;
}
