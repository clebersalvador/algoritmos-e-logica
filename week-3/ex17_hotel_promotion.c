#include <stdio.h>

int main(){
	
	//Variáveis
	int num_apartamentos;
	float diaria, diaria_promocional, total_100, total_70, perda;
	
	//Entrada dos dados
	printf("Digite o numero total de apartamentos do hotal: ");
	scanf("%d", &num_apartamentos);
	
	printf("Digite o valor da diaria por apartamento (sem desconto): ");
	scanf("%f", &diaria);
	
	//Cálculos
	diaria_promocional=diaria*0.75; //valor da diaria com 25% de desconto
	total_100=diaria_promocional*num_apartamentos; //valor total com 100% de ocupação
	total_70=total_100*0.7; //valor total com 70% de ocupação
	perda=(diaria*num_apartamentos)-total_100; //valor que o hotel deixa de arrecadar (diferença entre o valor sem desconto e com desconto, 100% ocupação)
	
	//Resultados
	printf("\nValor promocional da diaria: R$ %.2f\n", diaria_promocional);
	printf("Valor total com 100%% de ocupacao: R$ %.2f\n", total_100);
	printf("Valor total com 70%% de ocupacao: R$ %.2f\n", total_70);
	printf("Valor que o hotel deixara de arrecadar: R$ %.2f\n", perda);
	
	return 0;
}
