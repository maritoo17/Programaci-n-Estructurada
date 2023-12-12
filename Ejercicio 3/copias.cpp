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

int main() {
    struct Estudiante estudianteOriginal = {"Juan", 20, 9.5, NULL};

    struct Estudiante studianteCopia;

    copiarEstudiante(&studianteCopia, &estudianteOriginal);


    printf ("Estudiante original: %s, %d años, promedio %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);
    printf ("Estudiante copia: %s, %d años, promedio %.2f\n", studianteCopia.nombre, studianteCopia.edad, studianteCopia.promedio);

    return 0;
}