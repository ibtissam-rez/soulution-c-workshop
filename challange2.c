#include<stdio.h>
int main(){
    int resultat,modulo,division,chiffre;
    printf("Entrez un nombre a deux chiffres:");
    scanf("%d",&chiffre);
    modulo=chiffre%10;
    division=chiffre / 10;
    resultat=modulo * 10 + division;
    printf("Le nombre inverse est%d: ",resultat);
}