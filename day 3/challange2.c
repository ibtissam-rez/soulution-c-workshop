
#include <stdbool.h>
#include <stdio.h>

int main()
{
    bool digit_seen[100] = {false};
    int digit, i = 0;
    int found[] = {0};
    long n;

    printf("Entrer un nombre :");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        found[i] = digit;
        i++;

        n /= 10;
    }
    int count = 0;
    for (int t = 0;t <10;t++)
    {
        printf("%d ",t);
    }
    printf("\n");
    for (int d = 0; d < 10; d++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {

            if (d == found[j])
            {
                count++;
            }
        }
        printf("%d ", count);


    }

    return 0;
}

