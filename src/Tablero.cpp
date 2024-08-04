#include <stdlib.h>

#include <Tablero.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
tablero::tablero(int size_) { size = size_; };

void tablero::ImprimirTablero() {
    cout << "Imprimiendo tablero: " << endl;
    for (int i = 0; i < size; ++i) {
        cout << "  ";
        for (int j = 0; j < size; ++j) {
            std::cout << "+---";
        }
        cout << "+\n";
        cout << "  ";
        for (int j = 0; j < size; ++j) {
            std::cout << "| " << table[i][j] << ' ';
        }
        cout << "|\n";
    }
    cout << "  ";
    for (int j = 0; j < size; ++j) {
        cout << "+---";
    }
    cout << "+\n";
}

void tablero::GeneracionTablero() {
    if (size < 4) {
        throw runtime_error(
            "El tablero solicitado es demaciado pequeño, pruebe con un tamaño "
            "superior a 3");
    }
    table.resize(size, vector<char>(size));
    cout << "ASD" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            table[i][j] = ' ';
        }
    }
}
void tablero::InsertarFicha(char color, int columna) {
    columna -= 1;
    if (columna < 0) {
        cout << "La posicion solicitada es invalida, intente con numeros "
                "mayores a 0, porfavor"
             << endl;
    }
    if (columna > size) {
        cout << "Posicion invalida" << endl;
        return;
    }
    if (table[columna].back() != ' ') {
        cout << "La columna marcada esta llena" << endl;
        return;
    }
    // TODO: cambiar logica para el tope de la columna
    int top = 0;
    table[top][columna] = color;
}
int tablero::getSize() { return size; }
vector<vector<char>> tablero::getTable() { return table; }