#include <stdio.h>
int main () {
int numero = 0;
int resultado=0;
int numero1= 0;
int numero2 =1; 
printf ("Hola sea bienvenid@, por favor ingrese un numero para mostrarle la sucesión Fibonacci\n");
scanf ("%i",&numero);

for(int i = 0 ; i < numero;i++){
resultado= numero1+numero2;
printf ("%i", resultado);
numero1=numero2;
numero2=resultado; 
}


return 0;
}