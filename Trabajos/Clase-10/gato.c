//implementaciones
#include "gato.h"
#include <stdio.h>
// Imprime el tablero 
void imprimirTablero(){
    printf ("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf ("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf ("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}

int  verificarGanador_X(){
    if (('X'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
        ('X'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
        ('X'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
        ('X'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
        ('X'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
        ('X'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
        ('X'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
        ('X'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])){


ganador = 1;
} else { ganador = 0; }

return ganador;
}
int  verificarGanador_O(){
    if (('O'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
        ('O'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
        ('O'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
        ('O'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
        ('O'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
        ('O'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
        ('O'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
        ('O'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])){


ganador = 1;
} else { ganador = 0; }

return ganador;
}