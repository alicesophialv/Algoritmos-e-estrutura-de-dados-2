#include <stdio.h>

int main(){
	int a, menor, i;
	
	for (i = 0; i < 3; i++) {
		printf("Digite um numero: ");
		scanf("%d", &a);
		
		if(i==0){
			menor = a;
		}
		else{
			if(a<menor){
				menor = a;
			}
		}
	}
	
	printf("O menor eh: %d", menor);
	
	return 0;
}
