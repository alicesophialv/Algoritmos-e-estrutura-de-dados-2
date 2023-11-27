/*
-Crie um vetor de 5 posições do tipo Int.
-Imprima os valores na ordem de preenchimento
-Ordene o vetor pelo método InsertSort
-Ordene o vetor pelo método BubbleSort
-Crie um contador de iterações para indicar qual dos métodos realizou menor numero
de trocas.
*/
#include <stdio.h>

int insertionSort(int vetor[], int n);
int bubbleSort(int vetor[], int n);

int main() {
    int tam = 5;
    int vetorInsertion[tam];
    int vetorBubble[tam];
    int i, contadorIS, contadorBB;

	//entrada de dados
    for (i = 0; i < tam; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetorInsertion[i]);
        vetorBubble[i] = vetorInsertion[i];  // Copia os elementos para o vetor Bubble
    }
    
	
	//exibir o vetor
	printf("\nVetor antes da ordenacao: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetorInsertion[i]);
    }
    printf("\n");
	
	//INSERTION SORT
    contadorIS = insertionSort(vetorInsertion, tam);
    
    printf("\nVetor ordenado IS: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetorInsertion[i]);
    }
    
    printf("\nContador de trocas Insert Sort: %d", contadorIS);
	printf("\n");
	//BUBBLE SORT
	contadorBB = bubbleSort(vetorBubble, tam);

    printf("\nVetor ordenado BS: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetorBubble[i]);
    }
    
    printf("\nContador de trocas Bubble Sort: %d", contadorBB);
    
    return 0;
}
int insertionSort(int vetor[], int n) {
	int i, cont=0, aux, z;
	
    printf("\nTrocas realizadas IS:\n");
    for (i = 1; i < n; i++) {
    	int j = i;
    	
    	while (j > 0 && vetor[j] < vetor[j-1]) {
    		aux = vetor[j];
    		vetor[j] = vetor[j - 1];
    		vetor[j-1] = aux;
    		j-=1;
    		cont+=1;
    		
    		for (z = 0; z < 5; z++) {
 					printf("%4d", vetor[z]);				
			}
					
				printf("\n");
    		
		}
	}
	
	return cont;
}

int bubbleSort(int vetor[], int n) {
	int k, j, aux, cont=0, z;
	
	printf("\nTrocas realizadas BS:\n");
	for (k = 1; k < n; k++) {
		for(j = 0; j < n - 1; j++) {
			if (vetor[j] > vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
				cont+=1;
				
				for (z = 0; z < 5; z++) {
 					printf("%4d", vetor[z]);				
			}
					
				printf("\n");
			
		}
	}
}
	
	return cont;
}
