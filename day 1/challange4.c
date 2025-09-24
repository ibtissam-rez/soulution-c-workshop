#include<stdio.h>
int main(){
    float montant,dollars=0;
    printf("veuillez entrez un montant:");
    scanf("%f",&montant);
    dollars= montant+montant*5.0/100;
    printf("le montant en dollars est $%.2f",dollars);
    return 0;
}