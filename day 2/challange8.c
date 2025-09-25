#include<stdio.h>
int main (){
    int nombre1, nombre2 ,nombre3,nombre4,resultat;
    printf ("entrez la valeur de nombre1:");
    scanf("%d",&nombre1);
    printf ("entrez la valeur de nombre2:");
    scanf("%d",&nombre2);
    nombre3=nombre1;
    nombre4=nombre2;
    do{
        resultat=nombre1 % nombre2;
        nombre1=nombre2;
        nombre2=resultat;

    }while(nombre2 !=0);
    printf("%d/%d ",nombre3/nombre1,nombre4/nombre1 );
    return  0;
}