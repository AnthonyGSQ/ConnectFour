#include <stdlib.h>

#include <Tablero.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
tablero::tablero(int size_) { this->size = size_; };

void tablero::GeneracionTablero() {
    if (size < 4) {
        cout << "El tablero solicitado imposibilita jugar ConnectFour, pruebe "
                "con un tamaño superior o igual a 4"
             << endl;
        return;
    }
    table.resize(size, vector<char>(size));
    cout << "ASD" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            table[i][j] = ' ';
        }
    }
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
void tablero::InsertarFicha(char color, int columna) {
    if (columna > size) {
        cout << "Posicion invalida" << endl;
        return;
    }
    if (table[columna].back() != ' ') {
        cout << "La columna marcada esta llena" << endl;
        return;
    }
}