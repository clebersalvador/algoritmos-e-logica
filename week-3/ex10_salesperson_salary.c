#include <stdio.h>

int main (){
	
	//Variaveis
	int numero_vendedor;
	float total_vendas, salario_fixo, salario_total;
	
	printf("Digite o numero do vendedor: ");
	scanf("%d", &numero_vendedor);
	
	printf("Digite o total de vendas no mes (R$): ");
	scanf("%f", &total_vendas);
	
	printf("Digite o salario fixo do vendedor (R$): ");
	scanf("%f", &salario_fixo);
	
	//Cálculo
	salario_total=salario_fixo+(total_vendas*0.05);
	
	//Resultado
	printf("\nVendedor %d - Salario total: R$ %.2f", numero_vendedor, salario_total);
	
	return 0;
}
