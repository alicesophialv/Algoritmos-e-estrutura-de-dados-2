/*Crie um vetor de 5 posições do tipo Int.
- Preencha o vetor de forma aleatória
- Imprima os valores na ordem de preenchimento
- Ordene o vetor em modo crescente
- Ordene o vetor em modo decrescente */

#include <stdio.h>

// Declaração do protótipo da função
void bubble_sort(int vetor[], int n);
void bubble_sort_decrescente(int vetor[], int n);

int main() {
    int tam = 5;
    int vetor[tam];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    // Chama a função bubble_sort para ordenar o vetor
    bubble_sort_crescente(vetor, tam);

    // Imprime o vetor ordenado
    printf("\nVetor ordenado em modo crescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    bubble_sort_decrescente(vetor, tam);

    // Imprime o vetor ordenado
    printf("\nVetor ordenado em modo decrescente: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void bubble_sort_crescente(int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void bubble_sort_decrescente(int vetor[], int n){
	int k, j, aux;
	
	for(k = 1; k < n; k++) {
		for(j = 0; j < n - 1; j++) {
			if (vetor[j] < vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
}
