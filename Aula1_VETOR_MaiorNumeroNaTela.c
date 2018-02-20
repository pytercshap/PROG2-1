#include <stdio.h>

int main(){
    //Declara as variaveis
    int num[10], i, maior=0;

    //Loop para ler os numeros que o Usuario digitar
    for(i=0;i<=9;i++){
        printf("Entre com o numero:\n");
        scanf("%d",&num[i]);
        if(num[i]>maior)
            maior = num[i];
        }

    //Printa na tela o maior valor lido
    printf("\nMaior Valor = %d", maior);


    return 0;
}
