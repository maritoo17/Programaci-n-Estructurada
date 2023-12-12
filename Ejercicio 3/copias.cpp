#include <string.h>
#include <stdio.h>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
    struct Estudiante *siguiente;
};

void copiarEstudiante(struct Estudiante *destino, const struct Estudiante *origen) {
    strcpy(destino->nombre, origen->nombre);
    destino->edad = origen->edad;
    destino->promedio = origen->promedio;
}
