#include <stdio.h>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};

void imprimirEstudiante(struct Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {
    struct Estudiante estudiante = {"Juan", 20, 9.5};

    imprimirEstudiante(estudiante);

    return 0;
}