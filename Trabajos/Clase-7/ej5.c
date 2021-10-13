#include <stdio.h>
main () {
int numero1=0; 
int numero2=0;
int numero3=0;
int numero4=0;
int resultado=0;

do{
 printf ("hola bienvenid@, introduzca un número porfavor\n");
 scanf ("%i", &numero1);
 printf ("porfavor ingrese un segundo numero");
 scanf ("%i",&numero2);
 resultado= numero1+numero2;
 printf ("el resultado de la suma es: %i\n", resultado);
}while (numero1,numero2>=0);

return 0;


}
