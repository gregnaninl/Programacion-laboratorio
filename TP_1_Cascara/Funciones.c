# include "funciones.h"



int sumar(int x, int y)
{

    int resultado;
    resultado= x + y;
    return resultado;
}


int restar (int x, int y)
{
    int rta;
    rta= x - y;
    return rta;

}

int dividir (int x, int y)
{
    int rta;
    rta= x / y;
    return rta;

}


int multiplicar (int x, int y)
{
    int rta;
    rta= x * y;
    return rta;

}


int factorial(int x)
{
    int rta;
    if(x==1)
    {
        rta=1;
    }
    else
    {
        rta= x * factorial(x-1);
    }
    return rta;
}




