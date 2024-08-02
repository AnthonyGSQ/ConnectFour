#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>

class tablero {
   private:
    int size;
    std::vector<std::vector<char>> table;

   public:
    tablero(int size_);
    void GeneracionTablero();
    void InsertarFicha(char color, int columna);
    void ImprimirTablero();
    int getSize();
    std::vector<std::vector<char>> getTable();
};