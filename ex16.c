#include <stdio.h>
#include <stdlib.h>

int main () {
	float num_a, num_b, num_c, maior, menor;
	printf("Digite 3 numeros: \n\n");
	scanf("%f %f %f",&num_a,&num_b,&num_c);
	if (num_a>num_b) {
		maior=num_a;
		menor=num_b;
}
	else {
		maior=num_b;
		menor=num_a;
		
	}
	if (num_c>maior) {
		printf("O numero maior e' o %f\n",num_c);
		printf("O numero menor e' o %f\n",menor);
		printf("E a media e' de %f", (num_a+num_b+num_c)/3);
		
	}
}
	// NÃO CONSEGUI TERMINAR		
		
		
	


