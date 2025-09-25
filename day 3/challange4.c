
#include <stdio.h>

int main()
{
    int a[10], i;
    int taile = sizeof(a) / sizeof(a[0]);
    printf("Entrez %d nombres : ", taile);
    for (i = 0; i < taile; i++)
        scanf("%d", &a[i]);
    printf("Dans l ordre inverse :");
    for (i = taile - 1; i >= 0; i--)  
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
