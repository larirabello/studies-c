#include <stdio.h>
#include <stdlib.h>

int main () {
	float  horas_trab, valor_hora, sal_sem;
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f", &valor_hora);
	printf("Digite a quantidade de horas trabalhadas pelo funcionario: ");
	scanf("%f", &horas_trab);
	sal_sem=valor_hora*horas_trab;
	
	for(horas_trab=0; horas_trab<=40)
		printf("\nO salario totaliza em %f", sal_sem);
	for(horas_trab=41; horas_trab<=60) {
		sal_sem=sal_sem*(1+0.5);
		printf("\nO salario acrescido do bonus de 50%% totaliza em %f", sal_sem);
}
	for(horas_trab=61; horas_trab<=168)
		sal_sem=sal_sem*(1+1);
		printf("\nO salario acrescido do bonus de 100%% totaliza em %f", sal_sem);
	
	system("pause");
	return 0;
}
	
	/*
	if (horas_trab<40) {
		sal_sem=valor_hora*horas_trab;
		printf("\nO salario totaliza em %f",sal_sem);
	}	
	if (horas_trab>40) {
		sal_sem=(valor_hora*horas_trab)*(1+0.5);
		printf("\nO salario acrescido do bonus totaliza em %f",sal_sem);
	}
	if (horas_trab>60) {
		sal_sem=(valor_hora*horas_trab)*(1+1.0);
		printf("\nO salario acrescido do bonus totaliza em %f",sal_sem);
	}
		//ESTA SAINDO DOIS RESULTADOS 
*/
