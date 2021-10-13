#include <stdio.h>
int main () {
long clave_correcta=212574721;
long clave_usuario=0;
printf ("hola sea bienvenid@, por favor ingrese su clave\n");
scanf ("%lu", &clave_usuario);
if (clave_usuario==clave_correcta){
printf ("la clave es correcta\n");
} else {
 printf("la clave es incorrecta\n");
 printf ("le quedan 2 intentos\n");
 printf ("por favor, vuelva a introducir su clave\n");
 scanf ("%lu", &clave_usuario);
 if (clave_usuario==clave_correcta){
 printf ("la clave es correcta\n");
}else { 
  printf ("la clave es incorrecta\n");
  printf ("le queda un intento\n");
  printf ("por favor, vuelva a introducir su clave\n");
  if (clave_usuario==clave_correcta){
  printf ("la clave es correcta\n");
}else{
     printf ("el usuario ha sido bloqueado");
 return 0;
}
