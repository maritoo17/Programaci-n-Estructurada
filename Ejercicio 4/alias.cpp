#include <string.h>
#include <stdio.h>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};

typedef struct Estudiante EstudianteAlias;

int main() {
    EstudianteAlias estudiante = {"Juan", 20, 9.5};

    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);

    return 0;
}