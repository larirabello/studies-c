#include <stdio.h>
#include <stdlib.h>

int main () {
    float valor_prod, valor_venda;
    printf ("Insira o valor do produto: ");
    scanf ("%f",&valor_prod);
    
    if ( valor_prod <= 20.00) {
       valor_venda = valor_prod * (1 + 0,45);
       printf ("Valor de venda: %f\n", valor_venda);
    }
    else {
        valor_venda = valor_prod * (1 + 0,3);
        printf ("Valor de venda: %f\n", valor_venda);
    }
    system("pause");
    return 0;
}
    

/* O RESULTADO NÃO BATE */
