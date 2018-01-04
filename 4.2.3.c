#include <stdio.h>
# define ROZMIAR 4


double na_tablicach_srednia (unsigned int n, const int *tab );


double na_tablicach_srednia (unsigned int n, const int *tab )
{

    int wynik =0;

    for ( int i=0;i < n;i++)

    {

       wynik +=tab[i];

    }

    double srednia = (double)wynik/n;

    return srednia;

}

int main()

{

    int tablica[ROZMIAR]={1,2,3,4};

    double srednia = na_tablicach_srednia (ROZMIAR, tablica);

    printf("tablica ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tablica[i]);

    }

    printf("\nSrednia arytmetyczna tej tablicy wynosi %.1f", srednia);

    return 0;
}