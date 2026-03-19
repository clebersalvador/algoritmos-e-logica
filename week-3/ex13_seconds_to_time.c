#include <stdio.h>

int main() {
    // Variáveis
    int segundos, dias, horas, minutos, resto;

    // Entrada
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Cálculos
    dias=segundos/86400; //Divide a quantidade total de segundos por 86400 (segundos em 1 dia) para obter os dias inteiros. Ou segundos/(24*60*60)
    resto=segundos%86400; //Calcula o que sobra depois de contar os dias (resto em segundos). Ou horas=segundos%86400/3600
    horas=resto/3600; //Divide o resto por 3600 (segundos em 1 hora) para obter as horas inteiras. Ou minutos=segundos%86400%3600/60
    resto=resto%3600; //Calcula o que sobra depois de contar as horas (resto em segundos)
    minutos=resto/60; //Divide o resto por 60 (segundos em 1 minuto) para obter os minutos inteiros

    // Resultado
    printf("Resultado: %d dias, %d horas e %d minutos\n", dias, horas, minutos);

    return 0;
}
