#include <stdio.h>
#include <string.h>

char splite(char str[],char delim[]);
main(){

    char str[] = "Dia de chuva tempo chuvoso";
    splite(str," "); //printf("%s ",str);
    getch();
}

char splite(char str[], char delim[]){
    int i=0; char *pch; pch = strtok (str,delim);

    while (pch != NULL){
    printf("%s\n",pch);
    pch = strtok (NULL, delim);
    }
}
