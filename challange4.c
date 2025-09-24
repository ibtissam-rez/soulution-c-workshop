#include<stdio.h>
int main ()
{
    int annee1,mois1 ,jour1;
    int annee2,mois2 ,jour2;

    printf("Entrez la premiere date (mm/jj/aa) :");
    scanf("%d/%d/%d",&mois1,&jour1,&annee1);
    printf("Entrez la la deuxieme date (mm/jj/aa) :");
    scanf("%d/%d/%d",&mois2,&jour2,&annee2);

    if(jour1 < 1 || jour1 > 31 || jour2 < 1 || jour2 > 31 ||
        mois1 < 1 || mois1 > 12 || mois2 < 1 || mois2 > 12 ||
        annee1 <= 0 || annee2 <= 0)
    {
        printf("Date invalide\n");
        return 1;
    }

    if (annee1 > annee2)
    {
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois2, jour2, annee2, mois1, jour1, annee1);
    }
    else if (annee1 < annee2)
    {
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois1, jour1, annee1, mois2, jour2, annee2);
    }
    else
    {
        if (mois1 > mois2)
        {
            printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois2, jour2, annee2, mois1, jour1, annee1);
        }
        else if (mois2 > mois1)
        {
            printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois1, jour1, annee1, mois2, jour2, annee2);
        }
        else
        {
            if (jour1 > jour2)
            {
                printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois2, jour2, annee2, mois1, jour1, annee1);
            }
            else if (jour2 > jour1)
            {
                printf("%d/%d/%d est plus tot que %d/%d/%d\n", mois1, jour1, annee1, mois2, jour2, annee2);
            }
            else
            {
                printf("%d/%d/%d est la meme date que %d/%d/%d\n", mois1, jour1, annee1, mois2, jour2, annee2);
            }
        }
    }
    return 0;
}