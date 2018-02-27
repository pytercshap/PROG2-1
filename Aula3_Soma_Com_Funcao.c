#include <stdio.h>

int soma(int n1, int n2){
	
	return (n1+n2);
}

int main(){
	
	int num1, num2, res;
	
	printf("AULA3 - PROGRAMA DE SOMA COM FUNCAO");
	printf("\n\n\n");
	
	printf("\nPrimeiro Numero: ");
	scanf("%d",&num1);
	printf("\nSegundo Numero: ");
	scanf("%d",&num2);
	
	res = soma(num1,num2);
	
	printf("Resultado eh: %d", res);
	return 0;
}
