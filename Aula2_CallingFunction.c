/* 1º METODO - Sala de Aula */

#include <stdio.h>

int saudacao(){
        printf("Boa Noite");
    }

int main(){
    saudacao();
    return 0;
}


/* 2º METODO - Tentativa e Erro em Casa */

char saudacao(char v1[]){

	printf("\n\nSua Saudacao foi: %s",v1);
	
}

char main(){
	
	char c[100];
	
	printf("\nDigita uma saudacao:");
	scanf("%[^\n]s",c);
	
		saudacao(c);
    	return 0;
}



/* 1ª Ideia do Programa */
/*
int saudacao(char);

void main(){

char c;

c = saudacao()
    printf("%s",&c);


    }

*/
        //Meu Codigo Acima <- Ideia
        // DEPOIS TENTAR FAZER DESTE JEITO AQUI(Em casa).
        //codigo da internet abaixo, para servir como base para "puxar argumento"
/*
#include<stdio.h>
#include<conio.h>

int sum(int,int);

void main()
{
int a,b,c;
printf("\nEnter the two numbers : ");
scanf("%d%d",&a,&b);

c = sum(a,b);

printf("\nAddition of two number is : %d",c);
getch();
}

int sum (int num1,int num2)
{
int num3;
num3 = num1 + num2 ;

return(num3);
}

*/
