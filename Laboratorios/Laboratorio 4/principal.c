// Christian Altmiranda Solano (c00261), a=6 b=1

#include <stdio.h>
#include "calculadora.h"

int a=6;
int b=1;

int main(){
	
	int resultado;

	printf("El resultado en binario de la funcion bitwise_and es ");
	print_binary(bitwise_and(a,b));

	printf("El resultado en binario de la funcion birwise_or es ");
        print_binary(bitwise_or(a,b));

	printf("El resultado en binario de la funcion birwise_xor es ");
	print_binary(bitwise_xor(a,b));

	printf("El resultado en binario de la funcion birwise_not es ");
	print_binary(bitwise_not(a));

        printf("El resultado en binario de la funcion birwise_not es ");
	print_binary(bitwise_not(b));

}
