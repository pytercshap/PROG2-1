#include <stdio.h>
#include <string.h>

int main() {

	char name[50], sub_name[50], aux_char[100];
	int n1,n2,aux_int;

	printf("Enter a Number 1: ");
	scanf("%d",&n1);
	printf("Enter a Number 2: ");
	scanf("%d",&n2);

	aux_int = n1;
	n1 = n2;
	n2 = aux_int;

	printf("\n%d\n%d",n1,n2);
	
	
	printf("Enter a Name 1: ");
	gets(name);
	printf("Enter a Name 2: ");
	gets(sub_name);
	
	aux_char = name;
	name = sub_name;
	sub_name = aux_char;
	
	puts(name);
	puts(sub_name);
	return 0;
}
