#include <stdio.h>
#include <math.h>

int main (){
	
	//Variáveis
	float peso, altura, imc;
	
	//Entrada dos valores
	printf("Digite seu peso (kg): ");
	scanf("%f", &peso);
	
	printf("Digite sua altura (m): ");
	scanf("%f", &altura);
	
	//Cálculo
	imc=peso/pow(altura, 2);
	
	//Resultado
	printf("\nSeu IMC: %.2f", imc);
	
	return 0;
}
