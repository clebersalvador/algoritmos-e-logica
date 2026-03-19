#include<stdio.h>

int main(){
	float n1, n2;
	char operacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Escolha a operacao (+, -, *, /): ");
	scanf(" %c", &operacao);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &n2);
	
	if(operacao=='+'){
		printf("\nResultado: %.2f\n", n1+n2);
	}else if(operacao=='-'){
		printf("\nResultado: %.2f\n", n1-n2);
	}else if(operacao=='*'){
		printf("\nResultado: %.2f\n", n1*n2);
	}else if(operacao=='/'){
		if (n2!=0){
			printf("\nResultado: %.2f\n", n1/n2);
		}else{
			printf("\nNao existe divisão por zero\n");
		}
	}else{
			printf("\nOperacao invalida\n");
	}
		
	return 0;
}
