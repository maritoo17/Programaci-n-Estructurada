#include <string.h>
#include <stdio.h>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
    struct Estudiante *siguiente;
};