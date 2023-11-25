#include <stdio.h>

int main(){
	int a, maior, i;
	 
	
	for (i = 0; i < 3; i++) {
		printf("Digite um numero: ");
		scanf("%d", &a);
		
		if(i==0){
			maior = a;
		}
		else{
			if(a>maior){
				maior = a;
			}
		}
	}
	
	printf("O maior eh: %d", maior);
	
	return 0;
}
