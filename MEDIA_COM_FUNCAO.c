#include <stdio.h>

int resultado_unilasalle(float av1, float av2, float av3){
	
	float res;
	int AZ;
	res = av1 + av2 + av3;
	res = res / 3;
	if(res >= 6){
		AZ=1;
	}
	else{
		AZ=0;
	}
	
	return (AZ);
	
}

int main(){
	
	float nota1, nota2, nota3, media;
	
	printf("\nDê a Nota da AV1: ");
	scanf("%.2f",&nota1);
	printf("\nDê a Nota da AV2: ");
	scanf("%.2f",&nota2);
	printf("\nDê a Nota da AV3: ");
	scanf("%.2f",&nota3);
	
	if(resultado_unilasalle(nota1,nota2,nota3))
		printf("\n1 - PASSOU!");
	else
		printf("\n0 - NAO PASSOU!");
	
	return 0;
}
