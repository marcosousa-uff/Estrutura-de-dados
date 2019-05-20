#include <stdio.h>
#include <stdlib.h>

int main ( ) // Fabonnaci com complexidade linear
{
    int n,i,soma;

    printf("insira o numero n para Fibonacci com tempo de execucao linear (n <= 46) :");

    scanf("%i",&n);

    int vet[n];

    vet[0] = 1;
    vet[1] = 1;
    for( i=2 ; i<n ; i++ )
    {
        vet[i]= vet[i-1] + vet[i-2];

    }
    printf("[ ");
    for( i = 0 ; i < n ; i++ )
    {
        printf("%d",vet[i]);

        if(i < n-1 )printf(" ,");

    }
    printf(" ]");


}
