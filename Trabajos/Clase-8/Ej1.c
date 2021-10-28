#include <stdio.h>
int main () {
    
char jugador_numero1=0;
char tablero [3][3] = {{'-','-','-'},{'-','-','-'},{'-','-','-'}};
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }

}
int fila=0;
int columna=0;  
printf ("\n");
printf ("por favor haga la jugada de modo X,Y\n"); //1 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada\n");
    printf ("por favor haga la jugada de modo X,Y\n"); 
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='X';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
printf ("es turno del siguiente jugador, por favor introduzca la jugada de modo X,Y\n"); //2 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada\n");
    printf ("por favor haga la jugada de modo X,Y\n");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='O';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
printf ("jugador X, haga su siguiente jugada por favor"); //3 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada\n");
    printf ("por favor haga la jugada de modo X,Y\n");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='X';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
printf ("Jugador O, haga su siguiente jugada por favor\n"); //4 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='O';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
printf ("jugador X es su turno"); //5 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='X';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
if (('X'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('X'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('X'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('X'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("felicidades jugador X ha ganado\n");

}else{
printf ("Jugador O es su turno" ); //6 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='O';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
}
if (('O'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('O'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('O'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('O'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("felicidades jugador O ha ganado\n");
}else{
printf ("jugador X es su turno"); //7 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
    }
}
tablero [fila-1][columna-1]='X';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
if (('X'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('X'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('X'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('X'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("felicidades jugador X ha ganado\n");

}else{
printf ("Jugador O es su turno" ); //8 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='O';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
}
if (('O'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('O'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('O'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('O'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("Felicidades Jugador O ha ganado");
}else{
printf ("jugador X es su turno"); //9 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
    }
}
tablero [fila-1][columna-1]='X';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
if (('X'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('X'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('X'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('X'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('X'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('X'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("felicidades jugador X ha ganado\n");
}else{
printf ("Jugador O es su turno" ); //8 turno
scanf ("%i,%i",&fila,&columna);
while(tablero [fila-1][columna-1]!='-'){
    printf ("esta casilla ya fue ocupada");
    printf ("por favor haga la jugada de modo X,Y");
    scanf ("%i,%i",&fila,&columna);
}
tablero [fila-1][columna-1]='O';
for (int i=0;i<3;i++){ printf ("\n");
    for (int j=0;j<3;j++){
    printf ("%c", tablero[i][j]);
    }
}
}
if (('O'== tablero[0][0]&& tablero[0][0]==tablero[0][1]&& tablero[0][1]==tablero[0][2])||
('O'== tablero[1][0]&& tablero[1][0]==tablero[1][1]&& tablero[1][1]==tablero[1][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[2][1]&& tablero[2][1]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][0]&& tablero[1][0]==tablero[2][0])||
('O'== tablero[0][1]&& tablero[0][1]==tablero[1][1]&& tablero[1][1]==tablero[2][1])||
('O'== tablero[0][2]&& tablero[0][2]==tablero[1][2]&& tablero[1][2]==tablero[2][2])||
('O'== tablero[0][0]&& tablero[0][0]==tablero[1][1]&& tablero[1][1]==tablero[2][2])||
('O'== tablero[2][0]&& tablero[2][0]==tablero[1][1]&& tablero[1][1]==tablero[0][2])
){
printf ("Felicidades Jugador O ha ganado");
    
}else{
 printf ("empate"); 
}











return 0;
}