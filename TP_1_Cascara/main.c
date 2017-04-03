#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int x;
    int y;
    int resultado;
    int banderax=0;
    int banderay=0;



    while(seguir=='s')
    {
        printf("\n1- Ingresar 1er operando (A)\n");
        printf("2- Ingresar 2do operando (B)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese 1er operando: ");
                scanf("%d",&x);
                //x= getche();
                banderax=1;
                break;
            case 2:
                printf("Ingrese 2do operando: ");
                scanf("%d",&y);
                //y= getche();
                banderay=1;
                break;
            case 3:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {

                resultado = sumar(x,y);
                printf("la suma es: %d ", resultado);
                banderax=0;
                banderay=0;

                }
                break;
            case 4:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                resultado = restar(x,y);
                printf("La resta es: %d", resultado);
                banderax=0;
                banderay=0;
                }
                break;
            case 5:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                if(y==0)
                {
                    printf("No se puede dividir por CERO!!\n");
                }
                else
                {
                resultado = dividir(x,y);
                printf("La division es: %d", resultado);
                banderax=0;
                banderay=0;
                }
                }
                break;
            case 6:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                resultado = multiplicar(x,y);
                printf("La multiplicacion es: %d", resultado);
                banderax=0;
                banderay=0;
                }
                break;
            case 7:
                if(banderax==0)
                {
                printf("\nEs necesario ingresar el operando A!!!\n");
                }
                else
                {
                resultado = factorial(x);
                printf("El factorial de A es: %d", resultado);
                banderax=0;
                banderay=0;
                }
                break;
            case 8:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                for ( int i=3; i<=7 ; i++)
                {
                     opcion = i;
                     switch(opcion)
        {
            case 3:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {

                resultado = sumar(x,y);
                printf("la suma es: %d\n", resultado);


                }
                break;
            case 4:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                resultado = restar(x,y);
                printf("La resta es: %d\n", resultado);

                }
                break;
            case 5:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                if(y==0)
                {
                    printf("No se puede dividir por CERO!!\n");
                }
                else
                {
                resultado = dividir(x,y);
                printf("La division es: %d\n", resultado);

                }
                }
                break;
            case 6:
                if(banderax==0 || banderay==0)
                {
                printf("\nEs necesario ingresar los 2 operandos!!!\n");
                }
                else
                {
                resultado = multiplicar(x,y);
                printf("La multiplicacion es: %d\n", resultado);

                }
                break;
            case 7:
                if(banderax==0)
                {
                printf("\nEs necesario ingresar el operando A!!!\n");
                }
                else
                {
                resultado = factorial(x);
                printf("El factorial de A es: %d\n", resultado);
                banderax=0;
                banderay=0;

                }
                break;

                printf(opcion);


                }
                }
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }


   }

    return 0;
}
