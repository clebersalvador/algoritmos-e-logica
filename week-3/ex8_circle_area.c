#include <stdio.h>
#include <math.h>

int main(){
	
	//Variáveis
	float raio, area;
	
	//Entrada do valor
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	//Cálculo
	area=3.14159*pow(raio, 2);
	
	//Resultado
	printf("\nArea do circulo: %.2f", area);
	
	return 0;
}
