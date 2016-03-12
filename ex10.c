#include <stdio.h>
#include <stdlib.h>

int main () {
	int num_a, num_b, reserva;
	printf("Insira o primeiro numero: ");
	scanf("%d",&num_a);
	printf(" Insira o segundo numero: ");
	scanf("%d",&num_b);
	reserva=num_a;
	num_a=num_b;
	num_b=reserva;
	printf("\n\nAgora a primeira variavel tem o valor de %d e a segunda tem o valor %d.",num_a,num_b);
	return 0;
	system ("pause");
	
	
}
