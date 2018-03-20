#include <stdio.h>
#include <math.h>

int triangulo_valido(float ld1, float ld2, float ld3){

    int cond1, cond2, cond3;

    if(ld1>fabs(ld2-ld3) && ld1<(ld2+ld3)){
        cond1=1;
    }
    else{
        cond1=0;
    }

    if(ld2>fabs(ld1-ld3) && ld2<(ld1+ld3)){
        cond2=1;
    }
    else{
        cond2=0;
    }

    if(ld3>fabs(ld1-ld2) && ld3<(ld1+ld2)){
        cond3=1;
    }
    else{
        cond3=0;
    }

    return cond1,cond2,cond3;

}

int main(){

    float lado1,lado2,lado3;

    printf("\nTRABALHO 1 - FUNCAO TRIANGULO VALIDO");

    printf("\n\nEntre com o Valor do LADO 1: ");
    scanf("%f"&lado1);

    printf("\n\nEntre com o Valor do LADO 2: ");
    scanf("%f"&lado2);

    printf("\n\nEntre com o Valor do LADO 3: ");
    scanf("%f"&lado3);

    printf("\n\n\n");

    printf("\nCondicao1: %d\nCondicao2: %d\nCondicao3: %d",cond1,cond2,cond3);

    return 0;
















/*

LUANA CODIGO

#include <stdio.h>
#include <math.h>

int main (){

int a, b, c;

printf("Digite os lados do triangulo: \n");
scanf("%d %d %d", &a, &b, &c);
result=triangulo_valido(a,b,c);

return 0;
}

int triangulo_valido(int lado1,int ladob, int ladoc)
{
	printf("1");
	int a, b, c, x, y, z;

	printf("2");
	x=fabs(b-c);

	printf("3");
	y=fabs(a-c);

	printf("4");
	z=fabs(a-b);

	printf("5");
	if(x<a<b+c && y<b<a+c && z<c<a+b)
	printf("\nEh um triangulo.");
	else
	printf("\nNao eh um triangulo.");
}


*/
}
