# Tarea 2 Programación de Computadores  
Esta tarea fue desarrollada por el grupo 4, los integrantes son: Andrés Cerda y Cristóbal Pincheira

##Función:
Este Programa tiene la función de mantener información resguardada de una tienda, inventario,
a la vez tiene la opción de poder editar el inventario,
ya sea que al momento de vender o administrar en bodega resulte que:
Falta un objeto o salió con algún fallo. 
Además tiene la capacidad de producir ventas aunque exclusivamente con efectivo.

## Compilación 
Para que el comando funcione, primero se debe compilar el programa para ello deberá ejecutar este comando.
```bash
gcc main.c -o Ej
```
##Uso:
Para poder usarlo deberá compilar el código como se mostró con anterioridad.
Una vez lista la compilación el código comenzará a pedirle información
siendo la primera el ingreso de usuario de empresa o crearse un usuario mediante tu rut
el cual deberá llevar su Rut pero sin necesidad de símbolos (puntos y el guion)

###Caso 1 Ingreso de usuario de empresa:
Naturalmente las empresas tienen usuarios propios por ello deberá ingresar el usuario de esta para acceder
si llega a fallar en un total de 3 veces se cerrara el programa, de no ser así ingresara al menú de la tienda
y le consultara su siguiente paso (proseguiré dando la información luego del caso 2 ya que ambas,
en casos correctos, llegan al mismo menú).

###Caso 2 Creación de usuario:
Se le pedirá que ingrese su Rut para crear el usuario sin necesidad de símbolos (puntos o guion).
Una vez ingresado deberá ingresar el usuario ya creado, en caso de un fallo se le mostrará el usuario creado para recordar cual es,
en caso de fallar una segunda vez se cierra el usuario, en caso de que haya ingresado de buena forma entrara al menú.

###Menú:
Le pedirá si desea vender algún producto o si desea editar el almacén del programa.

###caso 1:
Le pedirá que ingresé algún código de barra de uno de sus productos, en nuestro ejemplar hay del 101 hasta el 104.

Una vez ingresado se le pide cuántos de estos deseará vender, si llegase a escoger más de la cantidad que hay, simplemente dirá que hay un error en su pedido
terminado con el primer código agregado luego le dará la opción de ingresar más si así lo desea, de la misma forma que con el primer código, cabe destacar que en este 
momento también se le dará el precio del articulo a vender.

En caso de que no desee vender más artículos se le pedirá el ingreso del efectivo o el monto a pagar, si llega a faltar dinero podrá cancelar la compra.
Si tiene el dinero necesario para pagar la compra se le dará las gracias, se le entregará la boleta  y el programa se apagará.


###Caso 2:
Se le preguntará si desea agregar productos o si querrá restar productos, para ello se le informará que deberá seleccionar 1 o 2.

####Agregar:
Se le pedirá que ingrese el código del producto, este puede ser del 101 hasta 104,
luego se le pedirá la cantidad de productos nuevos (del código que ya has ingresado).
Tras esto último se le enviará un mensaje que confirmará la integración de los productos al sistema,
luego se le preguntará si deseará ingresar más productos, en caso de un si será de la misma forma que fue realizada con anterioridad,
en caso de un no el programa se cerrara.


####Quitar:
En un principio se le pedirá saber si la reducción del inventario fue por algún fallo del producto o por hurto.


#####Caso 1:
Se le pedirá que ingrese el código del producto fallado, de 101 hasta 104, 
además se le preguntara si el producto fallado estaba presente en la sala, en la bodega o en ambas 
y la cantidad de estos productos en sala (que poseían algún fallo).
por ultimo se le preguntara si habrá otro producto con fallo.
Tras responder los dos requisitos se le informara el proceso ya completo y se cerrara el programa.


#####Caso2:
Se le preguntara por el código de barra del producto hurtado, de 101 hasta 104,
Se le pedirá la cantidad de productos hurtados.
Se le informará del cambio en el inventario y se le preguntara si hubo algún otro hurto,
si es correcto volverá a hacer el mismo proceso que el anterior, mientras que si esto no ha ocurrido
se cerrará el programa.


##Información del desarrollador:
Los desarrolladores de este código son estudiantes de la Universidad de la Frontera de Temuco 
contacto de Cristóbal Pincheira: +569 20182126
Contacto de Andrés Cerda: +569 49415177



##Agradecimientos:
Agradecimientos para Andrés Cerda y Cristóbal Pincheira









 













