#include <stdio.h>
int main () {
int numero1 = 0;
int numero2 = 0;
int producto = 0;
printf ("Hola, sea bienvenido\n"); 
 printf ("Por favor ingrese el primer número real de la forma X.X\n");
 scanf ("%f, numero1");
 printf ("Por favor ingrese el segundo número real de la forma Y.Y\n");
scanf ("%f, numero2");
producto = numero1 * numero2 ;
printf ("el resultado del producto entre %.2f y %.2f es: %.2f\n, numero1, numero2, producto");
return 0; 
}