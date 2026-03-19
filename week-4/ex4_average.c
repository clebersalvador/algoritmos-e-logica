#include <stdio.h>
main(){
	float n1, n2, m;
	
	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	
	m=(n1+n2)/2;
	
	printf("\nMedia: %.2f", m);
	
	if(m>=6){
		printf("\n\nAluno Aprovado\n");
		
	}else{
		printf("\n\nAluno Reprovado\n");
	}
}
