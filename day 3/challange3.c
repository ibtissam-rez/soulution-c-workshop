#include <stdio.h>

int main() {
    long n;
    while (1) {
        printf("Entrez un nombre : ");
        scanf("%ld", &n);

        if (n <= 0)
            break;

        int digit_count[10] = {0};
        long temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            digit_count[digit]++;
            temp /= 10;
        }

        printf("Le nombre %ld contient:\n", n);
        for (int i = 0; i < 10; i++) {
            if (digit_count[i] > 0) {
                printf("Chiffre %d: %d fois\n", i, digit_count[i]);
            }
        }
    }

    return 0;
}