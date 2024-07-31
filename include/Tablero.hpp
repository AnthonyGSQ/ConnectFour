#include <stdlib.h>

#include <iostream>
#include <string>
#include <vector>

class tablero {
   private:
    int size;
    char color;
    std::vector<std::vector<char>> table;

   public:
    tablero(int size_);
    void GeneracionTablero();
    void InsertarFicha(char color, int columna);
    int getSize();
    char getColor();
    std::vector<std::vector<char>> getTable();
};