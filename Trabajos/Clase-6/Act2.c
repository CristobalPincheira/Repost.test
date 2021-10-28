#include <stdio.h>
int main () {

int numero1=0;
int numero2=0;
int numero3=0;
printf ("bienvenid@, porfavor ingrese tres números");
scanf ("%i,%i,%i", &numero1, &numero2, &numero3);
if (numero1>numero2 && numero1>numero3){
printf ("numero1  es el más grande\n");
}else if ( numero2>numero1 &&  numero2>numero3){
printf (" numero2 es el más grande\n");
}else if (numero3>numero2 && numero3>numero1)
printf (" numero 3 es el  más grande");





    return 0; 
}