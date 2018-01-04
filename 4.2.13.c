#include <stdio.h>
#include <stdlib.h>

int * alokuj(unsigned int n)
{

    //int *A = (int*)calloc(n, sizeof(int));

    //return A;

    return calloc(n, sizeof(int));

}

int main() {

    int n =4;

   int *wsk = alokuj(n);

    printf("Wskaznik na liczbe to: ");

    for(int i=0; i<n; i++)
    {

        printf("%d ", wsk[i]);

    }

    return 0;
}
