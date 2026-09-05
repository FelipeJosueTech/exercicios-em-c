/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao INSS. quanto pagou ao sindicato. o salário líquido. calcule os descontos e o salário líquido, conforme a tabela abaixo:

+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.
*/

#include <stdio.h>

float calcula_salario_bruto(float salario_hora, float horas_trabalhadas) {
    return salario_hora * horas_trabalhadas;
}

float desconto_ir(float salario_bruto) {
    return salario_bruto * 0.11f;
}

float desconto_inss(float salario_bruto) {
	return salario_bruto * 0.08f;
}

float desconto_sindicato(float salario_bruto) {
	return salario_bruto * 0.05f;
}

float calcula_salario_liquido(float salario_bruto, float IR, float INSS, float sindicato) {
	return salario_bruto - (IR + INSS + sindicato);
}


int main() {
    float salario_hora, horas_trabalhadas;
	float salario_bruto, IR, inss, sindicato, salario_liquido;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &salario_hora);
    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);
	
	salario_bruto = calcula_salario_bruto(salario_hora, horas_trabalhadas);
	IR = desconto_ir(salario_bruto);
	inss = desconto_inss(salario_bruto);
	sindicato = desconto_sindicato(salario_bruto);
	
	salario_liquido = calcula_salario_liquido(salario_bruto, IR, inss, sindicato);
	
	printf("+ Salário Bruto : R$%.2f\n- IR (11%%) : R$%.2f\n- INSS (8%%) : R$%.2f\n- Sindicato ( 5%%) : R$%.2f\n= Salário Liquido : R$%.2f\n", salario_bruto, IR, inss, sindicato, salario_liquido);

    return 0;
}