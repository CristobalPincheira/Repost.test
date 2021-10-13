#include <stdio.h>
int main () {
int numero= 0 ;
printf ("Hola bienvenid@,Ingrese un número por favor");
scanf ("%i", &numero); 
for (int i=2 ; i<=numero; i++){
int divisores= 0;
 printf ("descubrir si el %i tiene unicamente 2 divisores\n",i);
 for (int x=2 ; x<i; x++){
     printf ("Revisando: %i\n", x); 
     int resto= i%x ;
     if (resto == 0){
         printf ("el %i es divisor de %i\n", x,i);
         divisores++;
     }else{
         printf ("el %i no es divisor de %i\n", x,i);
     }
 }
 if (divisores==0){
     printf ("el %i es primo\n",i);
     
 }else{
     printf ("el %i no es primo\n");
 }
}

return 0;
}

