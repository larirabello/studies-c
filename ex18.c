#include <stdio.h>
#include <stdlib.h>

int main () {
	float aceler, f;
	printf("Insira a aceleracao do carro em m/s2: ");
	scanf("%f",&aceler);
	f=700*aceler;
	printf("A Forca equivalente exercida pelo motor e' de %f N",f);
}
