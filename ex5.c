#include <stdio.h>
#include <stdlib.h>

int main () {
	int c,f;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%d",&c);
	f=(9*c+160)/5;
	printf("A temperatura convertida e' de %d Fahrenheit.",f);
	
}
