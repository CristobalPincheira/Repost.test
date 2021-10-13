#include <stdio.h>
main () {
int numero1=0;
int numero2=0;
int producto=0;

printf ("Hola bienvenid@, por favor introduzca dos numeros de la forma: X,Y \n");
scanf ("%i,%i",&numero1, &numero2);
for (int i=0; i<numero2; i++){

    producto+=numero1;
}

printf ("el resultado de %i*%i es %i\n", numero1, numero2, producto);



return 0;
}