#include <stdio.h>

int main (){
	
	//Variáveis
	int anos, cigarros_por_dia, total_cigarros;
	float preco_carteira, total_carteiras, gasto;
	
	//Entrada dos valores
	printf("Digite o numero de anos que fuma: ");
	scanf("%d", &anos);
	
	printf("Digite a quantidade de cigarros fumados por dia: ");
	scanf("%d", &cigarros_por_dia);
	
	printf("Digite o preco da carteira de cigarros: ");
	scanf("%f", &preco_carteira);
	
	//Cálculos
	total_cigarros=anos*365*cigarros_por_dia; //total de cigarros fumados
	total_carteiras=total_cigarros/20.0;  // total de carteiras
	gasto=total_carteiras*preco_carteira; //dinheiro gasto
	
	//Resultados
	printf("\nDinheiro gasto pelo fumante: R$ %.2f", gasto);
	
	return 0;
}
