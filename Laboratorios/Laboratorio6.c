// Christian Altamiranda Solano (c00261)


#include <stdio.h>
#include <stdlib.h>



int MCD(int a, int b){    
    if (a==0 && b==0){
        return -1;
    }
    else if (a<0 || b<0){
        return -2;
    }

    else if(b==0){
        return a;
}
    else{
        return MCD(b, a%b);
}
}
//aqui se filtran  con if -else los casos en los que ambos arguemos son 0 o si alguno de los argumentos es negativo
//Si no es el caso, se calcula el MCD de manera recursiva


int main(int argc, char *argv[]) {
int resultado;

    if (argc != 3) {
        printf("Error: Se requieren exactamente 2 argumentos.\n"); 
        return 1;
    }
//se filtran los casos en los que se no se reciben 2 argumentos y se avisa del error

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
//se convierten los argumentos a y b a enteros con "atoi"

 resultado= MCD(a,b);
 if (resultado==-1){
    printf("Error: ambos numeros son 0, por lo que no hay MCD.\n");
 }

 else if (resultado==-2){
    printf("Error: Al menos uno de los numeros es negativo. \n");
 }

 else{
 printf("El máximo comun divisor es %d \n", resultado);
}
 return 0;


}
