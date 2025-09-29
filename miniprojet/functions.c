#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#define MAX 100 
 int i, j;
    int temp;
    char model[10][20];
    char teemp[30];
    int choix;
    int id;
    int found;
    int table_capacite[10];
typedef struct {

    int Id ; 
    char Avion_Model[MAX][30];
    int capacite;
    char status[MAX][30];
    char Date_Entre[MAX][30];
}Avions_struct ;

Avions_struct Avion[MAX] ;

int nbr_total_avion = 0;
int choice_status;
int Search_Id;
void Ajouter_Avion()
{
    printf("       AJOUTER UN AVION   \n");
    Avion[nbr_total_avion].Id = nbr_total_avion + 1;

    printf("entrer la model de avion  : ");
    scanf(" %[^\n]", Avion[nbr_total_avion].Avion_Model);

    printf("entrer la capacite de avion  : ");
    scanf("%d", &Avion[nbr_total_avion].capacite);

    printf("entrer la status de avion : ");
    scanf(" %[^\n]", Avion[nbr_total_avion].status);

    printf("entrer la date de entrer d un avion : ");
    scanf(" %[^\n]", Avion[nbr_total_avion].Date_Entre);
    printf("Avion avec ID : %d et la model : %s capacite : %d status : %s  Ajouter avec success \n",
           Avion[nbr_total_avion].Id,
           Avion[nbr_total_avion].Avion_Model,
           Avion[nbr_total_avion].capacite,
           Avion[nbr_total_avion].status);
    nbr_total_avion++;
}


void Afficher_Avion()
{
    if (nbr_total_avion == 0)
    {
        printf("Pas des Avion !!!\n");
    }
    else
    {
        printf("              TOUT LES AVION             \n");
        for (int i = 0; i < nbr_total_avion; i++)
        {
            printf(" ID d Avion  :%d \n", Avion[i].Id);
            printf("model de avion : %s\n", Avion[i].Avion_Model);
            printf("capacitie de avion : %d \n",Avion[i].capacite);
            printf("statu d avion : %s\n", Avion[i].status);
        }
    }
}
void Modifier_Avion()
{
    int found = 0;
    printf("Enter une Id pour Modifier : ");
    scanf("%d", &Search_Id);
    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
        {
           found = 1;
                printf("entrer la model de avion  :");
                scanf(" %[^\n]", Avion[i].Avion_Model);
                printf("entrer la capacite de avion  :");
                scanf("%d", &Avion[i].capacite);
                printf("la status de avion  :\n");
                scanf(" %[^\n]",Avion[i].status);
                printf("la date de avion  :\n");
                scanf(" %[^\n]",Avion[i].Date_Entre);
            }
        }

        if(found==0){
            printf("erreur");
        }
    }
void Supprimer_Avion()
{ 
int found = 0;
    printf("         SUPPRIMER UN AVION         \n");

    printf("enter ID pour suppremer un avion : ");
    scanf("%d", &Search_Id);

    for (int i = 0; i < nbr_total_avion; i++)
    {
        if (Search_Id == Avion[i].Id)
            found = 1;
        {
            for (int j = i; j < nbr_total_avion - 1; j++)
            {
               Avion[j] = Avion[j+1];
            }
               nbr_total_avion--;

            printf("Avion supprimer avec successe\n");
            break;
        }
    }
        if (!found)
        {
            printf("Pas d Avion avec cet ID !!!\n");
        }
        nbr_total_avion--;
}
void Rechercher_Avion(){
    printf("----- RECHERCHER UN AVION -----\n");
    printf("1- Rechercher par ID\n");
    printf("2- Rechercher par Model\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Entrer l'ID : ");
        scanf("%d", &id);

        for (int i = 0; i < nbr_total_avion; i++) {
            if (Avion[i].Id == id) {
                printf("Avion trouve !\n");
                printf("ID: %d\nModel: %s\nCapacite: %d\nStatus: %s\nDate: %s\n",
                       Avion[i].Id,
                       Avion[i].Avion_Model,
                       Avion[i].capacite,
                       Avion[i].status,
                       Avion[i].Date_Entre);
                found = 1;
                break;
            }
        }
    } else if (choix == 2) {
        printf("Entrer le Model : ");
        scanf(" %[^\n]", model);

        for (int i = 0; i < nbr_total_avion; i++) {
            if (strcmp(Avion[i].Avion_Model, model) == 0) {
                printf("Avion trouve !\n");
                printf("ID: %d\nModel: %s\nCapacite: %d\nStatus: %s\nDate: %s\n",
                       Avion[i].Id,
                       Avion[i].Avion_Model,
                       Avion[i].capacite,
                       Avion[i].status,
                       Avion[i].Date_Entre);
                found = 1;
                break;
            }
        }
    } else {
        printf("Choix invalide !\n");
        return;
    }

    if (!found) {
        printf("Aucun avion trouve !\n");
    }
// printf("veuileez entrez les elements de tableau :\n");
// for(i=0;i<10; i++){
//     scanf("%d",&table_capacite[i]);
// }
// for (i=0;i<10-1;i++){
//     for(j=0;j<10-i-1;j++){
// if(table_capacite[j] > table_capacite[j+1]){
// temp=table_capacite[j];
// table_capacite[j]=table_capacite[j+1];
// table_capacite[j+1]=temp;
// }
// }

// }
// printf("Veuillez entrer les models d'avion :\n");
// for (i = 0; i < 10; i++) {
//     scanf(" %[^\n]", model[i]); 
// }
// for (i = 0; i < 10 - 1; i++) {
//     for (j = 0; j < 10 - i - 1; j++) {
//         if (strcmp(model[j], model[j + 1]) > 0) {
//             strcpy(teemp, model[j]);
//             strcpy(model[j], model[j + 1]);
//             strcpy(model[j + 1], teemp);
//         }
//     }
// }
// printf("\nModels tries (ordre alphabetique):\n");
// for (i = 0; i < 10; i++) {
//     printf("%s\n", model[i]);
// }
// int BinarySearchByID(Avions_struct avions[], int n, int id) {
//     int gauche = 0, droite = n - 1;

//     while (gauche <= droite) {
//         int mid = (gauche + droite) / 2;
//         if (avions[mid].Id == id)
//             return mid; 
//         else if (avions[mid].Id < id)
//             gauche = mid + 1;
//         else
//             droite = mid - 1;
//     }

//     return -1; 
// }
// int BinarySearchByModel(Avions_struct avions[], int n, char key[]) {
//     int gauche = 0, droite = n - 1;

//     while (gauche <= droite) {
//         int mid = (gauche + droite) / 2;
//         int cmp = strcmp(avions[mid].Avion_Model, key);
//         if (cmp == 0)
//             return mid; 
//         else if (cmp < 0)
//             gauche = mid + 1;
//         else
//             droite = mid - 1;  
//     }

//     return -1;  
// }
   