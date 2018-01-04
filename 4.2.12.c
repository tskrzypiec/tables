#include <stdio.h>
#define ROZMIAR 4

void na_tablicach_przesun_prawo (unsigned int n, int *tab3);
void na_tablicach_przepisz_revers (unsigned int n, int *tab);
void na_tablicach_przesun_lewo (unsigned int n, int *tab2);
void na_tablicach_sort_ros (unsigned int n, int *tab4);
int maksimum (unsigned int n, int *tab4);

int maksimum (unsigned int n, int *tab4)
{
    int i, max = 0;

    for(i=1;i<n;i++)
    {

        if (tab4[i]>tab4[max])
        {
            max = i;
        }

        return max;
}

void na_tablicach_sort_ros (unsigned int n, int *tab4)
{

    int j,i,schowek;

    for(i=0; i<n-1; i++)
    {

    j = maksimum (n-i,tab4); // funckcja jest tutaj zabroniona

    schowek = tab4 [n-i -1];

    tab4[n-i -1] = tab4[j];

        tab4[j] = schowek;

    }
}


void na_tablicach_przesun_prawo (unsigned int n, int *tab3)
{

    int schowek = tab3[n-1];


    for ( int i=n-2;i >=0;i--)
    {

        tab3[i+1] = tab3[i];

    }

    tab3[0] = schowek;

}


 void na_tablicach_przesun_lewo (unsigned int n, int *tab2)
{

    int schowek =0;

    schowek = tab2[0];

    for ( int i=0;i < n;i++)
    {

        tab2[i] =tab2[i +1];

    }

    tab2[n-1] = schowek;

}
void na_tablicach_przepisz_revers (unsigned int n,  int *tab)
{

    int k = 1;
    int schowek[10];

    for ( int i=0;i < n;i++)
    {

        schowek[i] =tab[n-k];
        k++;
    }

    for ( int i=0;i < n;i++)
    {

        tab[i] = schowek[i];

    }

}

int main()

{

    int tab[ROZMIAR]={1,2,3,4};
    int tab2[ROZMIAR]={5,6,7,8};
    int tab3[ROZMIAR]={10,20,30,40};
    int tab4[ROZMIAR]={10,30,20,50};

    printf("tablica przed przesuniecien ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab2[i]);

    }

    na_tablicach_przesun_lewo(ROZMIAR, tab2);

    printf("\ntablica po przesunieciu ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab2[i]);

    }

    printf("\ntablica przed revers 1, 2, 3, 4 ");

    na_tablicach_przepisz_revers(ROZMIAR, tab);

    printf("\ntablica po revers ");


    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab[i]);

    }

    printf("\ntablica przed przesunieciem w prawo ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab3[i]);

    }

    na_tablicach_przesun_prawo (ROZMIAR, tab3);

    printf("\ntablica po przesunieciu w prawo ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab3[i]);

    }

    printf("\ntablica przed sortowanie rosnoco ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab4[i]);

    }

    na_tablicach_sort_ros (ROZMIAR, tab4);

    printf("\ntablica po sortowaniu rosnoco ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tab4[i]);

    }
    return 0;
}