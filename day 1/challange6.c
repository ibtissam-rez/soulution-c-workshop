#include <stdio.h>
int main(){
    float x,volume=0;
    printf("veuillez entrez la valeur de x:");
    scanf("%f",&x);
    volume= ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("la valeur de x est :%.2f",volume);
    return 0;
}