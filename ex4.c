#include <stdio.h>
#include <stdlib.h>

int main () {
    char string [20];
    int i, cont;
    printf ("Digite um nome: ");
    gets(string);
    cont=0;
    for (i=0; string[i] != '\0'; i++) {
    	if ( string[i] == 'a' )
    	cont++;
    }
    for (i=0; string[i] != '\0'; i++) {
    	if ( string[i] == 'A')
    	cont++;
	}
	printf("\nNumero de caracteres A = %d", cont);
	return (0);
	
	/* ACHO QUE EU PODERIA TER FEITO UMA FUNÇÃO PRA OTIMIZAR ESSE CODIGO */
}

    
    
    
