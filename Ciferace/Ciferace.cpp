#include <stdio.h>

int soucet(int cislo) {
    int soucet = 0;
    while (cislo > 0) {
        soucet += (cislo % 10);
        cislo /= 10;
    }
    
    return soucet;
}

int main()
{
    int cislo, out, i = 0;
    printf("Zadejte cislo, jehoz ciferaci chcete vypocitat: ");
    scanf_s("%d", &cislo);

    out = soucet(cislo);
    while (i < 1) {
        if (out > 10) {
            out = soucet(out);
        }
        else {
            i++;
            printf("\nCiferace: %d", out);
        }
    }
}