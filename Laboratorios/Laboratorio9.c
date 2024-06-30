//Christian Altamiranda Solano c00261
#include <stdio.h>
#include <stdlib.h>


void menu() {
    printf("\nSeleccione una opción:\n");
    printf("1- Imprimir la cola\n");
    printf("2- Agregar un elemento (enqueue)\n");
    printf("3- Eliminar un elemento (dequeue)\n");
    printf("4- SALIR\n");
}


typedef struct node
{ 
    int val;
    struct node * next;

}node;

typedef struct cola {
    node* front;
    node* rear;
} cola;

node* nodonuevo(int k) {
    node* temp = (node*)malloc(sizeof(node));
    temp->val    = k;
    temp->next = NULL;
    return temp;
}

cola* crearcola() {
    cola* c = (cola*)malloc(sizeof(cola));
    c->front = c->rear = NULL;
    return c;
}

void enqueue(cola* c, int k) {
    node* temp = nodonuevo(k);
    if (c->rear == NULL) {
        c->front = c->rear = temp;
        return;
    }
    c->rear->next = temp;
    c->rear = temp;
}

void dequeue(cola* c) {
    if (c->front == NULL) {
        printf("Error, la cola esta vacia\n");
        return;
    }
    node* temp = c->front;
    c->front = c->front->next;
    if (c->front == NULL)
        c->rear = NULL;
    free(temp);
}

void printcola(cola* c) {
    if (c->front == NULL) {
        printf("La cola está vacía.\n");
        return;
    }
    node* temp = c->front;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    cola* c = crearcola();
    int choice, value;

    while (1) {
        menu();
        printf("Elija una opcion: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printcola(c);
                break;
            case 2:
                printf("Ingrese el valor a agregar: ");
                scanf("%d", &value);
                enqueue(c, value);
                break;
            case 3:
                dequeue(c);
                break;
            case 4:
              
                exit(0);
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }

    return 0;
}


