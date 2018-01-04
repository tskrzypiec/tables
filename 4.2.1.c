#include <stdio.h>




void na_tablicach (int n, int tab [n]);


void na_tablicach (int n, int tab [n])
{
    for ( int i=0;i < n;i++)

    {

       tab[i]= 5;

    }
 tab[5]=5;

//return 0;
}


int main()

{
    int tablica[4]={1,2,3,4};
    int n =4;

    int tab[]={1,2,3,4};
   // int tablica[4]={1,2,3,4};

    na_tablicach (n, tablica);


    for(int i=0;i<n; i++)
    {

        printf("tablica%d\n", tablica[i]);

    }


    return 0;
}