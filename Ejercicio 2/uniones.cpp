#include <string.h>
#include <stdio.h>

using namespace std;

union Datos{
    int entero;
    float flotante;
    char cadena[30];
};

int main() {
    union Datos datos_union;

    datos_union.entero = 10;
    printf("Entero: %d\n", datos_union.entero);

    datos_union.flotante = 3.1416;
    printf("Flotante: %.2f\n", datos_union.flotante);

    strcpy(datos_union.cadena, "Hola mundo");
    printf("Cadena: %s\n", datos_union.cadena);

    return 0;
}