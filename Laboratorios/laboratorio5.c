//Christian Altamiranda Solano (c00261)
//
//Este programa se ejecuta con 2 estructutas de control, el do -while para hacer un bucle del menu justo despues de haber impreso
//las piramides.
// tambien se utilizo el if y if else para filtrar las respuestas del usuario y para poder separar el codigo de 
// las piramides de base par o impar 



#include <stdio.h>
#include <string.h>

int main() {
    int piramide, filas, espacios;
    char caracter, opcion[6];
    int base;


    do {
        printf("Elija una opción:\n1. Pirámide\n2. Pirámide invertida\nOpcion: ");
        scanf("%d", &piramide);

        printf("\nElija un caracter: ");
        scanf(" %c", &caracter);

        printf("\nElija la cantidad de caracteres que formarán la base de la pirámide: ");
        scanf(" %d", &base);



    if(piramide==1){

           printf("Piramide (1), tamaño %d, caracter %c\n\n", base, caracter);
           filas = (base % 2 == 0) ? base / 2 : base / 2 + 1;


        if(base%2==0)
                for (int i = 1; i <= filas; i++) {
                for (espacios = 1; espacios <= filas - i; espacios++) {
                printf(" ");
}
                for (int j = 1; j <= 2 * i ; j++) {
                printf("%c", caracter);
}
                printf("\n");
}
        else if(base%2 !=0)
                for (int i = 1; i <= filas; i++) {
                for (espacios = 1; espacios <= filas - i; espacios++) {
                printf(" ");
}
                for (int j = 1; j <= 2 * i-1 ; j++) {
                printf("%c", caracter);
}
                printf("\n");

}
        }
    else if(piramide == 2){

         printf("Piramide invertida (2), tamaño %d, caracter %c\n\n", base, caracter);
         filas = (base % 2 == 0) ? base / 2 : base / 2 + 1;

        if(base%2==0)
                for (int i = 1; i <= filas; i++) {
                for (espacios = 1; espacios <= i-1; espacios++) {
                printf(" ");
}
                for (int j =2*(filas-i)+2; j >= 1 ; j--) {
                printf("%c", caracter);
}
                printf("\n");
}

        else if(base%2 !=0)
                for (int i = 1; i <= filas; i++) {
                for (espacios = 1; espacios <= i-1; espacios++) {
                printf(" ");
}
                for (int j = 2*(filas-i)+1; j >= 1 ; j--) {
                printf("%c", caracter);
}
                printf("\n");
}
}

        else {
            printf("Opción inválida.\n");
        }

        printf("Digite cualquier cosa para volver al menu (Digite SALIR para salir del programa): ");
        scanf("%s", opcion);

    } while (strcmp(opcion, "SALIR") != 0);

    return 0;
}

