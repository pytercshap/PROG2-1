#include <stdio.h>
#include <string.h>


int main(){

    char nome[50];
    char sobrenome[50];
    char aux[]=", ";
    char nomecompleto[50];

    printf("\nEntre com o nome: ");
    gets(nome);

    printf("\nEntre com o sobrenome: ");
    gets(sobrenome);

    /*
    // String Copy - Copiando (stringDestino, stringOrigem)
    strcpy(aux,sobrenome);
    strcpy(sobrenome,nome);
    strcpy(nome,aux);
    */

    /*
    //String Cat - Concatenando (stringDestino, stringOrigem)
    strcpy(nomecompleto,"");
    strcat(nomecompleto,sobrenome);
    strcat(nomecompleto,", ");
    strcat(nomecompleto,nome);
    */

    strlwr(nome);
    strlwr(sobrenome);

    printf("\nNome-------> %s \nSobrenome--> %s\n", nome, sobrenome);

    /*
    printf("%s",nomecompleto);
    */

    return 0;

/*
    char secreta[10] = "124";
    char senha[10];

    printf("\nEntre com a senha: ")
    gets(senha);

    if(!strcmp(senha,secreta))
*/
}
