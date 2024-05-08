// Christian Altmiranda Solano (c00261), a=6 b=1

#include <stdio.h>
#include "calculadora.h"

int a=6;
int b=1;
int decimal=5;

int main(){
	int resultado;

	resultado = bitwise_and(a,b);
	printf("El resultado del operador & es %d\n", resultado);

        resultado = bitwise_or(a,b);
        printf("El resultado del operador | es %d\n", resultado);

	resultado = bitwise_xor(a,b);
        printf("El resultado del operador ^ es %d\n", resultado);

	resultado = bitwise_not(a);
        printf("El resultado del operador ~ es %d\n", resultado);

	resultado = bitwise_not(b);
        printf("El resultado del operador ~ es %d\n", resultado);


	print_binary(decimal);
        printf("\n");
	
	
	return 0;
}
