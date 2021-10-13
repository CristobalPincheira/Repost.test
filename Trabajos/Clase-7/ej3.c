#include <stdio.h>
main () {
int numero;
int i;

do{
 printf ("hola bienvenid@, introduzca un número porfavor\n");
 scanf ("%i", &numero);
}while (numero<=0);

for(i=1 ; i<=numero/2;i++){
if (numero %i ==0){
printf ("%i",i);
}
}
printf ("%i", numero);


return 0;
}