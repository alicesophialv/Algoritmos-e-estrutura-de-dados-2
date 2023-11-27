/*
Dada a sequência de números: 3 4 9 2 5. Ordene em ordem crescente utilizando os
três algoritmos aprendidos em sala (BubbleSort, SelectionSort e InsertionSort),
apresentando a sequência dos números a cada passo (Teste de Mesa).
*/
#include <stdio.h>

int insertionSort(int vetor[], int n);
int bubbleSort(int vetor[], int n);
int selectionSort(int vetor[], int n);

int main() {
    int tam = 5;
    int vetorInsertion[] = {3, 4, 9, 2, 5};
    int vetorBubble[]= {3, 4, 9, 2, 5};
    int vetorSelect[] = {3, 4, 9, 2, 5};
    int i, contadorIS, contadorBB, contadorSS;

	
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
    
    printf("\nContador de trocas Bubble Sort: %d\n", contadorBB);
    
    //SELECT SORT
    contadorSS = selectionSort(vetorSelect, tam);

    printf("\nVetor ordenado SS: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", vetorSelect[i]);
    }
    
    printf("\nContador de trocas Select Sort: %d", contadorSS);
    
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

int selectionSort(int vetor[], int n) {
	int i, j, min, aux, cont=0, z;
	
	printf("\nTrocas realizadas SS:\n");
	for (i = 0; i < n-1; i++) {
		min = i;
		for(j = (i+1); j < n; j++) {
			if (vetor[j] < vetor[min]) {
				min = j;
			}
		}
		if( i != min) {
			aux = vetor[i];
			vetor[i] = vetor[min];
			vetor[min] = aux;
			cont+=1;
		
			for (z = 0; z < 5; z++) {
				printf("%4d", vetor[z]);				
			}
				
			printf("\n");		
			
		}
	}

	
	return cont;
}
