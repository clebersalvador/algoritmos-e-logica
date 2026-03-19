#include<stdio.h>

main(){
	
	int n;
	
	printf("Digite um numero: ");
	scanf("%i", &n);
	
	if(n>0){
		printf("\nNumero positivo\n");
	} else if(n<0){
		printf("\nNumero negativo\n");
	} else{
		printf("\nNumero ZERO\n");
	}

}
