#include <string.h>
#include <stdio.h>

using namespace std;

union Datos{
    int entero;
    float flotante;
    char cadena[30];
};