#include <stdio.h>
int main () {
  char jugador_numero1= 0;


printf ("-------------------");
printf ("-------------------");
printf ("-------------------");
printf ("-----Conecta 4-----");
printf ("-------------------");
printf ("-------------------");
printf ("-------------------");

printf ("quien inicia el juego, A (amarillo) o R (rojo)\n");
scanf ("%c", &jugador_numero1);

switch (jugador_numero1){
 case 'A': printf ("jugador_numero1: %c\n", jugador_numero1);
           printf ("comienza el jugador amarillo\n");
  break;
 case 'R':printf ("jugador_numero1: %c\n", jugador_numero1);
          printf ("comienza el jugador rojo\n");
  break;
default: printf ("la opcion ingresada no es válida\n");


}





return 0;

}