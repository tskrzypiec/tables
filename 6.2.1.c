#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *multi_tab(unsigned int tab1, unsigned int tab2) {

    int **alokuj = malloc(tab1 * sizeof(int *));

    for (int i = 0; i < tab1; i++) {
        alokuj[i] = malloc(tab2 * sizeof(int));
    }


    return alokuj;
}

int main() {

    int n = 2;
    int m = 3;

    int **wsk = multi_tab(n, m);

    printf("%d \n", wsk);

    return 0;
}