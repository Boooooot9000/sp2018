
#include <stdio.h>

void wczytaj_dane (int* a, int* b);
void wypisz_wyniki (int a, int b);


void wczytaj_dane (int* a, int* b)

{
    printf("Podaj dane a oraz b:  ");
    scanf("%d %d", a, b);
}

void wypisz_wyniki(int a, int b){
    printf("Wyniki czterech działań na x = %d, y=%d\n", a, b );
    printf("x + y = %d\n", a+b);
}