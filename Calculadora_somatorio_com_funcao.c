#include <stdio.h>


// Funcao recebendo os numero lidos no MAIN.
int somatorio(int numA, int numB){
	int numC;
	
	numC = numA + numB;
	
	printf("\n\nSomatorio de %d + %d = %d",numA,numB,numC);
	printf("\n\n\nFIM");
	
}

int main(){
	// a = Primeiro Numero
	// b = Segundo Numero
	// c = Somatorio
	int a,b,c;
	
	// Pergunta quais são os numeros para o somatorio e guarda eles.
	printf("\nPrograma de SOMA");
	printf("\n\nEntre com o primeiro numero: ");
	scanf("%d",&a);
	printf("\n\nEntre com o segundo numero: ");
	scanf("%d",&b);
	
	somatorio(a,b);
	
	return 0;
}
