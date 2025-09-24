#include <stdio.h>

int main() {
    int note;
    int valeur;  
    int a,b,c,d,f;
    printf("Entrez une note numerique : ");
    scanf("%d", &note);

    if (note >= 90 && note <= 100) {
        valeur= 'a';   
    } else if (note >= 80 && note <= 89) {
        valeur = 'b';   
    } else if (note >= 70 && note <= 79) {
        valeur = 'c';   
    } else if (note >= 60 && note <= 69) {
       valeur = 'd';  
    } else if(note >= 0 && note <= 59)  {
        valeur = 'd';
    }else{
        printf("ereur:");
        return 0;
    }

    switch (valeur) {
        case 'a':
            printf("Note litterale : a\n");
            break;
        case 'b':
            printf("Note litterale : b\n");
            break;
        case 'c':
            printf("Note litterale : c\n");
            break;
        case 'd':
            printf("Note litterale : d\n");
            break;
        case 'f':
            printf("Note litterale : f\n");
            break;
    }

    return 0;
}
