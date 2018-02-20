#include <stdio.h>

int main(){
    //Declara as variaveis
    int nota[10], i, maior, tam_turma, qtd_maior_media/*, media_turma=0*/;
    float media_turma=0;

    // Etapa 1 - Pergunte o Tamanho da TURMA
    printf("\nQual o tamanho da turma:");
    scanf("%d",&tam_turma);

    //Etapa 1.1 - Loop para ler as notas dos Alunos
    for(i=0;i<tam_turma;i++){
        printf("\nEntre com o numero:");
        scanf("%f",&nota[i]);
        if(nota[i]>maior)
            maior = nota[i];
        }

    //Maior Nota Lida
    printf("\nMaior Nota = %.2f", maior);

    for(i=0;i<9;i++){
        media_turma = media_turma + nota[i]; //Acumula as Notas
    }

    // Etapa2 - Calcular MEDIA
    media_turma = media_turma / tam_turma;

    printf("\nMedia da Turma eh: %.3f", media_turma);

    for(i=0;i<=9;i++){
        if(nota[i]>media_turma)
            qtd_maior_media++;
    }

    printf("\nNumero de Alunos com nota maior que a media da turma: %.2f", qtd_maior_media);


    return 0;
}
