#include <stdio.h>
#include <assert.h>
#define N 5

void pedirArreglo(int a[],int n_max) {
     int i, numArreglo;
     i = 0;
     while (i < n_max ) {
     printf("Ingresa un valor para la posicion %d del arreglo.\n", i);
     scanf("%d", &numArreglo);
     a[i] = numArreglo;
     i= i + 1;     
     }
}

void imprimeArreglo(int a[] , int n_max){
     int i;
     i=0;
     printf("El arreglo queda conformado como= ");
     while (i < n_max) {
     printf("%d", a[i]);
     i = i + 1 ;  
     }
}

int main() {
    int a[N];    
    assert(N > 0);
    pedirArreglo (a, N);
    imprimeArreglo(a, N);
    return 0;
}