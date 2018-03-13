#include <stdio.h>
#include <string.h>

void strcontagoogle(char *emailnovo, char *nome, char *sobrenome){

    // DESENVOLVER ALGORITMO PARA FORMAR EMAIL
    // nome.sobrenome@soulasalle.com.br

    strcat(emailnovo,nome);
    strcat(emailnovo,".");
    strcat(emailnovo,sobrenome);
    strcat(emailnovo,"@soulasalle.com.br");

}

int main(){

    char nome[50], sobrenome[50], email[100]="";

    printf("\nEntre com o nome: ");
    gets(nome);

    printf("\nEntre com o sobrenome: ");
    gets(sobrenome);

    strcontagoogle(email,nome,sobrenome);

    printf("e-Mail Novo eh: %s", email);

    return 0;
}
