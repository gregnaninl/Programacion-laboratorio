#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    int suma;
    int contador=0;
    float promedio;

    while(contador<5)
    {
    printf("ingrese un numero: ");
    scanf("%d" ,&numero );

    if(contador==0)
    {
    suma=numero;
    }
   else
   {
    suma=suma+numero;
   }

   contador++;
    }
    promedio=suma/5;

    printf("El promedio de los numero ingresados es %.2f  ",promedio);

    return 0;


}
