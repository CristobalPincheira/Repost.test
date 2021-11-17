#include <stdio.h>
int main (){
int misiones= 0;
int tesoros [10][10] ={{2,9,0,0,10,9,6,10,5,4},{9,6,5,0,0,9,6,3,2,8},{3,3,8,10,6,9,5,4,3,9},{2,6,3,6,4,3,6,2,8,3},{6,6,9,10,3,4,6,2,9,9},{4,10,4,4,9,0,9,10,8,8},{2,2,0,3,5,4,4,6,6,5},{8,4,1,3,9,5,6,6,7,7},{8,1,4,9,5,7,7,3,4,4},{4,8,5,4,2,3,3,2,3,6}};  


printf ("en cuantas misiones emprenderá el dia de hoy?\n");
scanf ("%i",&misiones);
if (misiones>=2 && misiones<=10){
    for (int i=0; i<misiones; i++){
    int fila_explorar=0;
    int columna_explorar=0;
    int fila_descubierta=0;
    int columna_descubierta=0;
    int tesoros_descubiertos=0;
    printf ("Ingrese coordenadas deseadas para que el robot se sumerja en formato X,Y\n");
    printf ("tenga en cuenta que es de formato 10x10\n");
    scanf ("%i,%i",&fila_explorar,&columna_explorar);

    if (fila_explorar<=10 && columna_explorar<=10){
         printf ("%i es la cantidad de tesoros descubiertos en dicho lugar\n",tesoros[fila_explorar][columna_descubierta]);
    
    




    }
    




    }
}else{
    printf ("por favor recuerde que las misiones son minimo 2 y maximo 10\n");
    
}








return 0;
}