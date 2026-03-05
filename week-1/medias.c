#include <stdio.h>
#include <math.h>

int main(){

float a=0,b=0,c=0,ma,mh,mg,mp;

//Entrada dos valores
printf("Digite o valor de a: ");
scanf("%f",&a);

printf("Digite o valor de b: ");
scanf("%f",&b);

printf("Digite o valor de c: ");
scanf("%f",&c);

//Media aritmetica
ma=(a+b+c)/3;

//Media harmonica
mh=3/((1/a)+(1/b)+(1/c));

//Media geometrica
mg=pow(a*b*c,1.0/3);

//Media ponderada
mp=(1*a+2*b+3*c)/6;

//Saida
printf("\n-----Resultados-----\n");

printf("Media aritmetica: %.2f\n",ma);
printf("Media harmonica: %.2f\n",mh);
printf("Media geometrica: %.2f\n",mg);
printf("Media ponderada: %.2f\n",mp);

return 0;

}
