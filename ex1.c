#include <stdio.h>
#include <stdlib.h>

int main () {
int num, ant, suc;
printf("Insira um numero: ");
scanf("%d",&num);
printf("\n\n");
printf("Seu antecessor: %d\n", ant=num-1);
printf("Seu sucessor: %d\n", suc=num+1);
system("pause");
return 0;
}

