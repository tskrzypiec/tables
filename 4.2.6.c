#include <stdio.h>
# define ROZMIAR 4

void na_tablicach_przepisz_revers (unsigned int n,  int *tab1, int *tab2);
void na_tablicach_przepisz (unsigned int n, int *tab1, int *tab2);

 void na_tablicach_przepisz (unsigned int n,  int *tab1, int *tab2)
{

    for ( int i=0;i < n;i++)

    {

        tab2[i] =tab1[i];

    }

}
void na_tablicach_przepisz_revers (unsigned int n,  int *tab1, int *tab2)
{

    int k = 1;

    for ( int i=0;i < n;i++)
    {

        tab2[i] =tab1[n-k];
        k++;
    }

}

int main()

{

    int tablica1[ROZMIAR]={1,2,3,4};
    int tablica2[ROZMIAR]={5,6,7,8};

    na_tablicach_przepisz (ROZMIAR, tablica1,tablica2);


    printf("tablica [1] ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tablica1[i]);

    }
    printf("\ntablica [2] ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tablica2[i]);

    }

    na_tablicach_przepisz_revers(ROZMIAR, tablica1,tablica2);

    printf("\ntablica [1] ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tablica1[i]);

    }
    printf("\ntablica [2] ");

    for(int i=0;i<ROZMIAR; i++)
    {

        printf("%d ",tablica2[i]);

    }


    return 0;
}