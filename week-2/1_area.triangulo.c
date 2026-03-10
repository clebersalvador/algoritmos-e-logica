#include<stdio.h>

int main(){

float base, altura, area;

printf("Digite o valor da base: ");
scanf("%f", &base);

printf("Digite o valor da altura: ");
scanf("%f", &altura);

area = (base*altura)/2;

printf("\n\nArea do triangulo: %.2f", area);

return 0;

}
