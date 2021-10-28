#include <stdio.h>
#include <stdlib.h>
int main () {
  //
  char jugador_numero1= 0;
  char tablero [6][7];
  int columna=0;
 
printf ("-------------------");
printf ("-------------------");
printf ("-------------------");
printf ("-----Conecta 4-----");
printf ("-------------------");
printf ("-------------------");
printf ("-------------------");

 for (int i= 0; i<6; i++){
   for (int j=0; j<7; j++){
   tablero[i][j]='O';
   printf ("%c", tablero[i][j]);
   }
    printf ("\n");
  }
printf ("por favor ingrese columna de jugada\n");
scanf ("%i",&columna);
while ((columna<1) || (columna>7)){
printf ("Jugada no validada, por favor ingresar jugada nuevamente");
scanf ("%i",&columna);
}

tablero[5] [columna-1] = 'A';
system ("cls");

 for (int i= 0; i<6; i++){
   for (int j=0; j<7; j++){
   printf ("%c", tablero[i][j]);
   }
    printf ("\n");
}









return 0;

}