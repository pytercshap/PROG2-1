#include <stdio.h>

int menu(){
	int opcao;
		
	printf("Calculadora - Escolha a opcao:\n");
	printf("\n1-Soma\n2-Subtrair\n0-Sair\n");
	printf("\nQual Opcao Desejada: ");
	scanf("%d",&opcao);
	
	return opcao;
}

int main(){
	
	int m=menu();
	
	if(m==1){
		printf("Opcao Selecionada foi: %d",m);
	}
	if(m==2){
		printf("Opcao Selecionada foi: %d",m);
	}
	if(m==0){
		printf("Opcao Selecionada foi: %d",m);
	}
	else{
		printf("Opcao INVALIDA");
	}
	
	return 0;
}
