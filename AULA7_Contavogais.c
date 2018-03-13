#include <stdio.h>
#include <string.h>

int contavogais(char *nome){

    //DESENVOLVER A LOGICA DE CONTAR VOGAIS
    int i, tam, cont=0;

    tam=strlen(nome);

    for (i=0;i<tam;i++){
        if( nome[i]=='a' ||
            nome[i]=='e' ||
            nome[i]=='i' ||
            nome[i]=='o' ||
            nome[i]=='u' ||
            nome[i]=='A' ||
            nome[i]=='E' ||
            nome[i]=='I' ||
            nome[i]=='O' ||
            nome[i]=='U')
            {
                cont++;
            }
        }

        return cont;
}

int main(){

    char nome[100];
    int qtdVogais;

    printf("\nEntre com uma frase: \n");
    gets(nome);

    qtdVogais=contavogais(nome);

    printf("\n\nEsta frase tem %d Vogais!", qtdVogais);

}
