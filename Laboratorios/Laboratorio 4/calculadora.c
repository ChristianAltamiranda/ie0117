//Christian Altamiranda Solano (c00261)
// Codigo de las funciones 


#include <math.h>
#include <stdio.h>


int bitwise_and(int a, int b){
	return a&b;
}

int bitwise_or(int a, int b){
        return a|b;
}

int bitwise_xor(int a, int b){
        return a^b;
}

int bitwise_not(int a){
        return ~a;
} 


void print_binary(int decimal) {
   printf("El numero en binario es ");    
    

    int bits = sizeof(decimal) ;
    
   
    for(int i = bits - 1; i >= 0; i--) {
      
        int bit = (decimal >> i) & 1;
       
        printf("%d", bit);
    }
    
    printf("\n");
}

