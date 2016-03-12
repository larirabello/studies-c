#include <stdio.h>
#include <stdlib.h>

int main () {
	char operacao;
	float num_a, num_b,result;
	printf("Digite o tipo de operacao desejada (+, -, * ou /): ");
	scanf("%c",&operacao);
	printf("Digite o primeiro valor: ");
	scanf("%f",&num_a);
	printf("Digite o segundo valor: ");
	scanf("%f",&num_b);
 	if (operacao=='+') {
 		result=num_a+num_b;
 		printf("%f",result);
	 } 
	 if (operacao=='-') {
 		result=num_a-num_b;
 		printf("%f",result);
	 } 
	 if (operacao=='*') {
 		result=num_a*num_b;
 		printf("%f",result);
	 } 
	 if (operacao=='/') {
 		result=num_a/num_b;
 		printf("%f",result);
	 } 
	
	
}
