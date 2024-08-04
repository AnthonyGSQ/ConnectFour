#include <gtest/gtest.h>
#include <stdlib.h>

#include <Tablero.hpp>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
TEST(Tablero_testing, Creacion_tablero) {
    tablero tablero_juego(4);
    vector<vector<char>> expected_table(4, vector<char>(4));
    EXPECT_EQ(tablero_juego.getSize(), 4);
    tablero_juego.GeneracionTablero();
    expected_table = tablero_juego.getTable();

    tablero_juego.InsertarFicha('R', 3);
    tablero_juego.InsertarFicha('R', 2);
    tablero_juego.InsertarFicha('R', 1);
    tablero_juego.InsertarFicha('A', 4);
    expected_table = tablero_juego.getTable();
    EXPECT_EQ(expected_table[0][0], 'R');
    EXPECT_EQ(expected_table[0][1], 'R');
    EXPECT_EQ(expected_table[0][2], 'R');
    EXPECT_EQ(expected_table[0][3], 'A');
    tablero_juego.ImprimirTablero();
}
TEST(Tablero_testing, TableroMalo) {
    tablero tablero_juego(3);
    EXPECT_THROW({ tablero_juego.GeneracionTablero(); }, runtime_error);
}