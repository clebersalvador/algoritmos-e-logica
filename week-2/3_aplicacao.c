#include <stdio.h>

int main(){
	float saldo, novosaldo;
	
	//Entrada do valor
	printf("Digite o saldo: ");
	scanf("%f", &saldo);
	
	//Cálculo do reajuste
	novosaldo=saldo*1.075;
	
	//Saída do resultado
	printf("\n\n-----------------------------");
	printf("\n\nSaldo reajustado: R$ %.2f\n\n", novosaldo);
	
	return 0;
}
