#include <stdio.h>
int main()
{
    char isbn[100];
    int i = 0, groupe = 0;
    printf("veuillez entre la valeur de isbn:");
    scanf("%s", isbn);
    printf("\nrefixe gs1:");
   
    for (i = 0; isbn[i] != '\0'; i++)
    {
        if (isbn[i] == '-')
        {
          

            groupe++;
            switch (groupe)
            {
             case 1:
                printf(" \nidentifiant de groupe:");
                break;
            case 2:
                printf(" \nCode de editeur:");
                break;
            case 3:
                printf("\nNumero de article:");
                break;
            case 4:
                printf("\nChiffre de controle:");
                break;
            }
        }
        else
        {
            printf("%c", isbn[i]);
        }
    }
    return 0;
}
