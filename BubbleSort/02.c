/*Crie um vetor de 20 posições do tipo Int.
- Preencha o vetor de forma aleatória
- Imprima os valores na ordem de preenchimento
- Preencha um vetor chamado PAR somente com os valores identificados como PAR no vetor original de forma crescente
- Preencha um vetor chamado IMPAR somente com os valores identificados como IMPAR no vetor original de forma decrescente
*/

#include <stdio.h>

// Declaração do protótipo da função
void bubble_sort_par(int vetor[], int n);
void bubble_sort_impar(int vetor[], int n);

int main() {
    int tam = 20;
    int vetor[tam];
    int par[tam], impar[tam];
    int i, j=0, k=0;

    for (i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }
    
    //vetor par
	for (i = 0; i < tam; i++) {
	    if (vetor[i] % 2 == 0) {
	        par[j] = vetor[i];
	        j++;
	    }
	}
    
    bubble_sort_par(par, j);

    // Imprime o vetor ordenado
    printf("\nVetor ordenado em par: ");
    for (i = 0; i < j; i++) {
        printf("%d ", par[i]);
    }
    
    //vetor impar
	for (i = 0; i < tam; i++) {
	    if (vetor[i] % 2 != 0) {
	        impar[k] = vetor[i];
	        k++;
	    }
	}
    
    bubble_sort_impar(impar, k);

    // Imprime o vetor ordenado
    printf("\nVetor ordenado em impar: ");
    for (i = 0; i < k; i++) {
        printf("%d ", impar[i]);
    }

    return 0; 
}

void bubble_sort_par(int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
            
        }
    }
}

void bubble_sort_impar(int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
            
        }
    }
}
