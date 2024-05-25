#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int pojemnosc_zbiornika = 10000;
    int ilosc_wody;
    int powierzchnia_dachu = 100;

    printf("Wybierz opcje:\n");
    printf("1 - Pokaz ilosc wody w zbiorniku\n");
    printf("2 - Wylosuj i pokaz ilosc wody w zbiorniku\n");

    int opcja;
    printf("Wybierz opcje:\n ");

    scanf("%d", &opcja);

    // Inicjalizacja generatora liczb losowych
    srand(time(NULL));

    switch (opcja) {
        case 1:
            int wybor;
            printf("Podaj wybrana liczbe: ");
            scanf("%d", &wybor);

            if (wybor >= 1 && wybor <= 10) {
                ilosc_wody = wybor * 1000;
                printf("W zbiorniku znajduje sie %d litrow wody.\n", ilosc_wody);
                printf("Ilosc wody na metr kwadratowy dachu: %.2f litrow/m^2\n", (float)ilosc_wody / powierzchnia_dachu);
            } else {
                printf("W zbiorniku znajduje sie %d litrow wody.\n", ilosc_wody);
                printf("Ilosc wody na metr kwadratowy dachu: %.2f litrow/m^2\n",(float) ilosc_wody / powierzchnia_dachu);
            }
            break;
        case 2:
            ilosc_wody = rand() % (pojemnosc_zbiornika + 1); // Losowanie liczby od 0 do pojemnosc_zbiornika
            printf("Wylosowana ilosc wody w zbiorniku: %d litrow\n", ilosc_wody);
            printf("Ilosc wody na metr kwadratowy dachu: %.2f litrow/m^2\n", (float) ilosc_wody / powierzchnia_dachu);
            break;
        default:
            printf("Podano nieprawidłowa opcje.\n");
            return 1;
    }

    return 0;
}
