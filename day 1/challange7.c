#include<stdio.h>
int main(){
    int montant, billets20 ,billets10, billets5, billets1;
    printf("veuillez entre la valeur de montant:");
    scanf("%d",&montant);
    billets20= montant/20;
    billets10=montant%20 /10;
    billets5=montant%10 /5;
    billets1=montant%5 /1;
    printf("%d\n",billets20);
    printf("%d\n",billets10);
    printf("%d\n",billets5);
     printf("%d\n",billets1);
     return 0;


    
}