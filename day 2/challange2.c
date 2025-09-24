#include<stdio.h>
int main(){
    int chiffre,module,division;
    printf("Entrez un nombre a deux chiffres: ");
    scanf("%d",&chiffre);
    module=chiffre % 10;
    division= module * 10 + (chiffre / 10);
    printf("Le nombre inverse est: %d",division);
    return 0;
}