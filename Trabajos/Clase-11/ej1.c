#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
int opcion;
int nombre;
int apellido;
int telefono;
FILE * archivo;
char nombreArchivo [20];
char rutaArchivo [20] = "./agendas/";

printf ("-------------------\n");
printf ("-Agenda telefonica-\n");
printf ("-------------------\n");

printf ("1.- Mostrar agendas existentes\n");
printf ("2.- Crear una Agenda\n");
printf ("3.- Insertar un contacto en una agenda\n");
printf ("4.- Revisar una Agenda\n");
printf ("5.- Eliminar una agenda\n");
printf ("6,- Salir\n");
printf ("ingrese una opcion\n");
scanf ("%i", &opcion);

switch (opcion){
case 1: printf ("Listar\n");
system ("dir agendas");
    break;
case 2: printf ("Crear\n");
printf ("ingrese un nombre para su nuevo archivo\n");
scanf ("%s",nombreArchivo);
strcat (nombreArchivo,".txt");
printf ("%s\n",nombreArchivo);
strcat (rutaArchivo,nombreArchivo);
archivo = fopen (rutaArchivo, "w");
    break;
case 3: printf ("Insertar\n");
system ("dir agendas");
printf ("escriba el nombre del archivo que quiere insertar\n");
scanf ("%s",nombreArchivo);
strcat (nombreArchivo,".txt");
strcat (rutaArchivo,nombreArchivo);
archivo = fopen (rutaArchivo, "a+");
printf ("ingrese el nombre del contacto\n");
scanf ("%s", nombre);
printf ("ingrese el apellido del contacto\n");
scanf ("%s", apellido);
printf ("ingrese el telefono del contacto\n");
scanf ("%s", telefono);
fprintf (archivo,"%s %s %s\n", nombre, apellido , telefono);
printf ("contacto guardado exitosamente\n");
fclose (archivo);
    break;
case 4: printf ("Revisar\n");
system ("dir agendas");
printf ("escriba el nombre de la agenda que quiere revisar\n");
scanf ("%s",nombreArchivo);
strcat (nombreArchivo,".txt");
strcat (rutaArchivo,nombreArchivo);
archivo = fopen (rutaArchivo,"r");
while (!feof(archivo)){
   fscanf(archivo, "%s %s %s\n", nombre, apellido, telefono);
   printf ("%s %s %s\n", nombre, apellido, telefono);
}
    break;
case 5: printf ("Eliminar\n");
system ("dir agendas");
printf ("escriba el nombre de la agenda que quiere borrar\n");
scanf ("%s",nombreArchivo);
strcat (nombreArchivo,".txt");
strcat (rutaArchivo,nombreArchivo);
remove (rutaArchivo);
    break;
case 6: printf ("Salir\n");
    break;
default: printf ("la opcion elegida no es valida\n");

}






return 0;
}