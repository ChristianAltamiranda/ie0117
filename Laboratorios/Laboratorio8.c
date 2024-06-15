//Christian Altamiranda Solano c00261
//
#include <stdio.h>
//aqui se define el struct con el nombre y datos solicitados

struct DatosPersona {
	char nombre [50]; 
	char apellido [50];
	int telefono;
	char carnet [50];
	char enfasis [50];
};


//aqui establece la funciion que recibe un puntero a un struct y por medio de scanf le pide al usuario llenar los valores del struct
void SetStruct(struct DatosPersona *persona){
    printf("Nombre: ");
    scanf("%49s", persona->nombre);
   
    printf("Apellido: ");
    scanf("%49s", persona->apellido);
    
    printf("Telefono: ");
    scanf("%d", &persona->telefono);
    
    printf("Carnet: "); 
    scanf("%19s", persona->carnet);
    
    printf("Enfasis: ");
    scanf("%49s", persona->enfasis);
}

void PrintStruct(const struct DatosPersona *persona) {
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s\n", persona->nombre);
    printf("Apellido: %s\n", persona->apellido);
    printf("Teléfono: %d\n", persona->telefono);
    printf("Carnet: %s\n", persona->carnet);
    printf("Énfasis: %s\n", persona->enfasis);
}


int main() {
    struct DatosPersona personas[5];


    for(int i = 0; i < 5; i++) {
        printf("\nPersona %d\n", i + 1);
        SetStruct(&personas[i]);
    }

    for(int i = 0; i < 5; i++) {
        printf("\nDatos de la persona %d\n", i + 1);
        PrintStruct(&personas[i]);
    }

    return 0;
}

