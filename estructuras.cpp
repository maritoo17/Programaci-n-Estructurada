#include <iostream>

using namespace std;

struct Estudiante {
    char nombre[30];
    int edad;
    float promedio;
};

int main(){
    struct Estudiante estudiante1;

    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;