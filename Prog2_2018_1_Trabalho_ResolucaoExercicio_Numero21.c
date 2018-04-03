#include <stdio.h>

int muda();

int main(){

    int hora, minuto, segundo;

    printf("CALCULADORA DE SEGUNDOS\n\n");

    printf("\nEntre com a HORA: ");
    scanf("%d",&hora);
    printf("\nEntre com o MINUTO: ");
    scanf("%d",&minuto);
    printf("\nEntre com o SEGUNDO: ");
    scanf("%d",&segundo);

    muda(hora,minuto,segundo);

    return 0;
}

int muda(int n1, int n2, int n3){

    int result;
    // 1 Hora = 3600 segundos
    // 1 Minuto = 60 segundos

    n1=n1*3600;
    n2=n2*60;

    result=n1+n2+n3;

    printf("\n\nTempo total em Segundos: %d\n",result);

    return n1,n2,n3;

}
