#include <stdio.h>
int main () { 
const float PI = 3.1415;
float radio = 0;
float perimetro = 0;
float aréa = 0;
printf("Ingrese el valor del radio de la circunferencia:\n");
scanf("%f", &radio);
perimetro = 2 * PI * radio;
aréa = PI * radio * radio;
printf("El perímetro es: %.2f\n", perimetro);
printf("El área es: %.2f\n", aréa);
return 0;
}
