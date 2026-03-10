#include<stdio.h>
int main(){
	//Variáveis
	float valor, prest;

	//Entrada do valor
	printf("Valor do produto: ");
	scanf("%f",&valor);
	
	//Processamento
	prest=valor/5;
	
	//Saída
	printf("\n--------------------------------");
	printf("\nResumo da compra");
	printf("\n--------------------------------");
	printf("\nPrestacoes (5x): R$ %.2f", prest);
	
	return 0;
	
}
