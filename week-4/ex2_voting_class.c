#include<stdio.h>

main(){
	int id;
	
	printf("Digite sua idade: ");
	scanf("%i", &id);
	
	if(id<16){
		printf("\nNao eleitor");
	}else if(id>=18 && id<=65){
		printf("\nEleitor obrigatorio");
	}else{
		printf("\nEleitor facultativo\n");
	}
}
