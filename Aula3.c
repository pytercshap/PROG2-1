#include <stdio.h>

void cont_regressiva(int tam){
	
	int i;
	for (i=tam;i>0;i--)
		printf("\n%d",i);
		
	printf("\nBOOOM!");
}

int main(){
	int o=0, valor_tam;
	
	while(o=1){
		printf("Qual o valor inicial da contagem regressiva?");
		scanf("%d",&valor_tam);
		
		cont_regressiva(valor_tam);
	}
	return 0;
}
