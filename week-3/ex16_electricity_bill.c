#include <stdio.h>

int main(){
	
	//Variáveis
	float salario_minimo, quilowatt_residencia, valor_quilowatt, valor_total, valor_desconto;
	
	//Entrada dos valores
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &salario_minimo);
	
	printf("Digite a quantidade de quilowatt consumida pela residencia: ");
	scanf("%f", &quilowatt_residencia);
	
	//Cálculos
	valor_quilowatt=salario_minimo*0.001; //valor de cada quilowatt
	valor_total=valor_quilowatt*quilowatt_residencia; //total a ser pago
	valor_desconto=valor_total*0.85; // valor com desconto de 15%
	
	//Resultados
	printf("\nValor de cada quilowatt: R$ %.2f\n", valor_quilowatt);
	printf("Valor a ser pago: R$ %.2f\n", valor_total);
	printf("Valor a ser pago com desconto de 15%%: R$ %.2f\n", valor_desconto);
	
	return 0;
}
