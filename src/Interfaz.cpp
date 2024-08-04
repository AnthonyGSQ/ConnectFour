#include <stdlib.h>
#include <string.h>

#include <Tablero.hpp>
#include <iostream>
using namespace std;
int main() {
    tablero tableroprueba(10);
    tableroprueba.GeneracionTablero();
    tablero tableroprueba2(3);
    tableroprueba2.GeneracionTablero();
}