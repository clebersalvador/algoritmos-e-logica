#include <stdio.h>

int main(){
	
	//Variáveis
	int ano_nascimento, ano_atual, idade_atual, idade_futura;
	
	//Entrada dos dados
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &ano_nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	//Calculo
	idade_atual=ano_atual-ano_nascimento;
	idade_futura=2028-ano_nascimento;
	
	//Resultados
	printf("\nIdade atual: %d", idade_atual);
	printf("\nIdade em 2028: %d", idade_futura);
	
	return 0;
}
