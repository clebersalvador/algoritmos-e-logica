#include <stdio.h>

int main(){
	
	//Variáveis
	float valor_produto, novo_valor;
	
	//Entrada do valor
	printf("Digite o valor do produto: R$ ");
	scanf("%f", &valor_produto);
	
	//Cálculo do desconto
	novo_valor=valor_produto-(valor_produto*0.09);
	
	//Resultado
	printf("\n\nValor com desconto de 9%%: R$ %.2f", novo_valor);
	
	return 0;
	
}
