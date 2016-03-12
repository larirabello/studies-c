#include <stdio.h>
#include <stdlib.h>

int main () {
	int num_a, num_b,num_c;
	float media;
	printf("Insira 3 numeros inteiros: \n\n");
	scanf(" %d %d %d", &num_a, &num_b, &num_c);
	media=(num_a+num_b+num_c)/3;
	printf("\n\nA media dos 3 valores resulta em %f\n", media);
	system("pause");
	return(0);
	
}
