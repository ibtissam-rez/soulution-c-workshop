#include <stdio.h>
int main(){
    float x,valeur=0;
    printf("veuillez entrez la valeur de x:");
    scanf("%f",&x);
    valeur=(3*x*x*x*x*x) + (2*x*x*x*x)+(x*x)+7*x-6;
    printf("la valeur de x est :%.2f",valeur);
    return 0;
}