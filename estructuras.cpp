#include <iostream>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};

int main(){
    struct Estudiante *puntero_estudiante;

    puntero_estudiante = (struct Estudiante *) malloc(sizeof(struct Estudiante));

    if (puntero_estudiante == NULL){
        printf("No se pudo asignar memoria");
        exit(1);
    }

    strcpy(puntero_estudiante->nombre, "Juan");
    puntero_estudiante->edad = 20;
    puntero_estudiante->promedio = 9.5;

    printf

