#include <stdio.h>
#include "gato.h"





int main(){

    printf("Bienvenido al juego del gato\n");

    int turnos = 0;  

     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }
   
    imprimirTablero();
 /* Este while evaluará hasta el 5, ya que este es el minimo para que el primer jugador,
 en este caso X,tenga la posibilidad para ganar */
 while (turnos < 5)
 {
     
    printf("Turno del jugador X\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='X';

    turnos = turnos + 1;

    imprimirTablero();

    if(turnos == 5){

        break;
    }

    printf("Turno del jugador O\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla ya esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='O';

    imprimirTablero();

    turnos = turnos + 1;
    
    }  
    
do {
   

 verificarGanador_X();

 if(ganador == 1 ){

    printf("Felicidades jugador X, usted ha ganado\n");
    break;

} else {
    
    printf("Turno del jugador O\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla ya esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='O';

    imprimirTablero();

    turnos = turnos + 1; 

     verificarGanador_O();

     if(ganador == 1){

         printf("Felicidades jugador O, usted ha ganado");
         break;

     } 



} 
    
    printf("Turno del jugador X\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);

    while(tablero [fila-1][columna-1]!='-'){
    printf ("Esta casilla ya esta ocupada\n");
    printf ("Por favor haga la jugada de modo fila, columna\n"); 
    scanf ("%d,%d",&fila,&columna);}

    tablero[fila-1][columna-1]='X';

    turnos = turnos + 1;

    imprimirTablero();


} while ( ganador == 0 && turnos < 9 );

 

 if(turnos == 9 && ganador == 0){

    printf("Empate, hasta otra");
    
 }
    return 0;
}  


