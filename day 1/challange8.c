#include <stdio.h>
int main()
{
    float montant, paiment_mois, tva, paiementm, dev;
    printf("veuillez entrez la valeur de montant:");
    scanf("%f", &montant);
    printf("v", &tva);
    printf("veuillez entrez la valeur de paiementm:");
    scanf("%f", &paiementm);
     printf("veuillez entrez la valeur de tva:");
    scanf("%f", &tva);
    dev=(montant*tva/100)/12;
    for (int i = 0; i < 12; i++)
    {
        montant = montant+dev-paiementm;
        printf("%.2f\n", montant);
    }
    printf("%.2f\n", dev);
    printf("%.2f\n", montant);

    return 0;
}