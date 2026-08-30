// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main(){
	float ganhoPorHora = 0.0, 
		horas = 0.0,
		totalSalario = 0.0;
	printf("Insira quanto ganha por hora e quantas horas trabalhou no mes: ");
	scanf("%f %f", &ganhoPorHora, &horas);
	
	totalSalario = ganhoPorHora * horas;
	
	printf("Seu salario esse mes foi de: R$%.2f", totalSalario);
	
	return 0;
}