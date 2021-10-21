#include <stdio.h>
int main () {
int  Sala=20;
int  Bodega=68;
int producto=0;
long usuario_tienda0=1012;
long usuario_tienda=0;
long usuario_trabajador0=214275721;
long usuario_trabajador=0;  
int opcion=0;
printf ("El Programa ha sido encendido\n");
printf ("Hola bienvenido al sistema regulador de mercaderia\n");
printf ("¿tiene usuario de trabajador?, de ser así por favor ingreselo\n");
printf ("en caso de querer crear un usuario, ingrese el numero 0\n");
scanf ("%lu\n",&usuario_trabajador);
printf ("%lu\n",usuario_trabajador);
    if (usuario_trabajador==usuario_trabajador0){
        printf ("por favor ahora ingrese el usuario de tienda\n");
        scanf ("%lu\n",&usuario_tienda);
        printf ("%lu\n",usuario_tienda);
           if (usuario_tienda==usuario_tienda0){
           printf ("bienvenido, ¿desea vender algun producto?\n");
             


            }else{
             printf ("el usuario tienda ingresado esta errado, tendra dos intentos más antes de que el programa se cierre\n");
             printf ("Por favor ingrese nuevamente el usuario tienda\n");
             scanf ("%lu\n",&usuario_tienda);
              if (usuario_tienda==usuario_tienda0){
              printf ("bienvenido, ¿desea vender algun producto?\n");

              }else{
                  printf ("el usuario tienda ingresado esta errado, le queda un ultimo intento\n");
                  scanf ("%lu\n",&usuario_tienda);
                  if (usuario_tienda==usuario_tienda0){
                  printf ("bienvenido, ¿desea vender algun producto?\n");

                  }else{
                   printf ("el usuario ingresado esta errado, adios\n");
                  }
              }

            }


    }else if (usuario_tienda==0){
    printf ("hola bienvenido, ingrese su rut sin guion como usuario\n");
    scanf ("%lu\n", &usuario_trabajador);
    printf ("%lu\n", usuario_trabajador);
    printf ("ahora para confirmar por favor agregue el usuario de la tienda\n");
    scanf ("%lu\n",&usuario_tienda);
        if (usuario_tienda==usuario_tienda0){
        printf ("El usuario ha sido creado correctamente\n");

        }else{
          printf ("Error al ingresar el usuario de la tienda, por favor intente de nuevo\n");
          printf ("se le informa que solo le quedan dos intentos más\n");
          scanf ("%lu\n", &usuario_tienda);
            if (usuario_tienda==usuario_tienda0){
            printf ("El usuario ha sido creado correctamente\n");

            }else{
            printf ("error al ingresar el usuario de la tienda, le queda un ultimo intento\n");
            scanf ("%lu\n", &usuario_tienda);
               if (usuario_tienda==usuario_tienda){
                printf ("El usuario ha sido creado correctamente\n");

               }else{
                printf ("error al ingresar el usuario de la tienda, adios\n");

               }
            }
            
        }




    }else{
        printf ("el usuario trabajador esta incorrecto, por favor ingreselo de nuevo, cabe mencionar que le quedan dos intentos\n");
        scanf ("%lu\n",&usuario_trabajador);
            if (usuario_trabajador==usuario_trabajador0){
                printf ("bienvenido, ¿desea vender algun producto?\n");

            }else{
            printf ("el usuario trabajador esta incorrecto, le queda un ultimo intento\n");
            scanf ("%lu\n",&usuario_trabajador);
                if (usuario_trabajador==usuario_trabajador0){
                 printf ("bienvenido, ¿desea vender algun producto?\n");

                }else{
                    printf ("el usuario ingresado es erroneo, adios\n");
                }


            }



    }




return 0;
}


