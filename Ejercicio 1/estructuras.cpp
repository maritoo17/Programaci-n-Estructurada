#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
    struct Estudiante *siguiente;
};

void agregarEstudiante(struct Estudiante **lista, char nombre[30], int edad, float promedio) {
    struct Estudiante *nuevoEstudiante, *auxiliar;
    nuevoEstudiante = (struct Estudiante *) malloc(sizeof(struct Estudiante));

    strcpy(nuevoEstudiante->nombre, nombre);
    nuevoEstudiante->edad = edad;
    nuevoEstudiante->promedio = promedio;
    nuevoEstudiante->siguiente = NULL;

    if (*lista == NULL) {
        *lista = nuevoEstudiante;
    } else {
        auxiliar = *lista;
        while (auxiliar->siguiente != NULL) {
            auxiliar = auxiliar->siguiente;
        }
        auxiliar->siguiente = nuevoEstudiante;
    }
}

void mostrarEstudiantes(struct Estudiante *lista) {
    while (lista != NULL) {
        printf("Nombre: %s\n", lista->nombre);
        printf("Edad: %d\n", lista->edad);
        printf("Promedio: %.2f\n", lista->promedio);
        lista = lista->siguiente;
    }
}

void eliminarEstudiante(struct Estudiante **lista, char nombre[30]) {
    struct Estudiante *auxiliar, *anterior;
    auxiliar = *lista;
    anterior = NULL;

    while (auxiliar != NULL) {
        if (strcmp(auxiliar->nombre, nombre) == 0) {
            if (anterior == NULL) {
                *lista = auxiliar->siguiente;
            } else {
                anterior->siguiente = auxiliar->siguiente;
            }
            free(auxiliar);
            return;
        }
        anterior = auxiliar;
        auxiliar = auxiliar->siguiente;
    }
}

int main() {
    struct Estudiante *puntero_estudiante;

    puntero_estudiante = (struct Estudiante *) malloc(sizeof(struct Estudiante));

    if (puntero_estudiante == NULL) {
        printf("No se pudo asignar memoria");
        exit(1);
    }

    strcpy(puntero_estudiante->nombre, "Juan");
    puntero_estudiante->edad = 20;
    puntero_estudiante->promedio = 9.5;

    printf("Nombre: %s\n", puntero_estudiante->nombre);
    printf("Edad: %d\n", puntero_estudiante->edad);
    printf("Promedio: %.2f\n", puntero_estudiante->promedio);

    agregarEstudiante(&puntero_estudiante, "Pedro", 21, 8.5);
    agregarEstudiante(&puntero_estudiante, "Maria", 22, 7.5);
    agregarEstudiante(&puntero_estudiante, "Jose", 23, 6.5);

    mostrarEstudiantes(puntero_estudiante);

    eliminarEstudiante(&puntero_estudiante, "Pedro");

    free(puntero_estudiante);

    return 0;
}