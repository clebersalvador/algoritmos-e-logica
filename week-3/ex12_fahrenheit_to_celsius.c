#include <stdio.h>

int main(){
	
	//Variáveis
	float f, c;
	
	//Entrada do valor
	printf("Digite a temperatura em Fahrenheint: ");
	scanf("%f", &f);
	
	//Cálculo
	c=5.0/9*(f-32);
	
	//Resultado
	printf("\nTemperatura em Celsius: %.2f", c);
	
	return 0;
	
}
