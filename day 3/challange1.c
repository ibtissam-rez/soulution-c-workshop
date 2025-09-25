#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    bool repitition[10] = {false};

    int digit1;
    long n, real;

    printf("Entrez un nombre : ");

    scanf("%ld", &n);
    real = n;


    while (n > 0) 
    
    {
        digit1 = n % 10;
        if (digit_seen[digit1])
            repitition[digit1] = true;
        else
            digit_seen[digit1] = true;
        n /= 10;
    }

    bool verifier= false;
    printf("Cdes chiffres sont repetes: ");


    for (int i = 0; i < 10; i++)
    {
        if (repitition[i]) {
            printf("%d ", i);
            verifier= true;
        }
    }

    if (!verifier)
        printf("Aucun Chiffre repete");

    printf("\n");
    return 0;
}