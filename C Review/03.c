/*Crie um código em C que preencha um vetor de 10 posições do tipo inteiro e: elimine
o menor e o maior valor e calcule a media do restante*/
#include <stdio.h>

int main(){
	int a, i;
	int v[10];
	int menor, maior;
	float soma=0, media=0;
	
	
	for (i = 0; i < 10; i++) {
		printf("Digite um numero: ");
		scanf("%d", &v[i]);
		
		if(i==0){
			menor = v[i];
			maior = v[i];
		}
		else{
			if(v[i]<menor){
				menor = v[i];
				
			}
			if(v[i]>maior){
				maior = v[i];
			}
		}
	}
	
	printf("O menor eh: %d e o maior eh: %d", menor, maior);

    for (i = 0; i < 10; i++) {
        if (v[i] != menor && v[i] != maior) {
        	soma += v[i];
            //printf("%d ", v[i]);
        }
    }
    
    media = soma/8; 
    printf("\nA media eh: %.1f", media);
    
	return 0;
}
