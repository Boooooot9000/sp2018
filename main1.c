#include <stdio.h>

void wczytaj_dane (int* a, int* b);
void wypisz_wyniki (int k, int m);

int main ()
{
    int x, y;
    wczytaj_dane(&x, &y);
    wypisz_wyniki(x, y);

    return 0;
}
void wczytaj_dane (int* a, int* b)

{
    printf("Podaj dane a oraz b:  ");
    scanf("%d %d", a, b);
}

void wypisz_wyniki(int k, int m){
    printf("Wyniki czterech działań na x = %d, y=%d\n", k, m );
    printf("x + y = %d\n", k+m);
}
