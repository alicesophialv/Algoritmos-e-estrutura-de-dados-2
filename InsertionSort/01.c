I#include <stdio.h>

void insertionSort(int vetor[], int n);

int main() {
    int tam = 25;
    int vetor[tam];
    int i;

	//entrada de dados
    for (i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
	
	//exibir o vetor
	printf("\nVetor antes da ordenacao: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }

    insertionSort(vetor, tam);

    printf("\nVetor ordenado em modo crescente: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

void insertionSort(int vetor[], int n) {
	int i;
	
    for (i = 1; i < n; i++) {
    	int j = i;
    	
    	while (j > 0 && vetor[j] < vetor[j-1]) {
    		int aux = vetor[j];
    		vetor[j] = vetor[j - 1];
    		vetor[j-1] = aux;
    		j-=1;
    		
		}
	}
}

