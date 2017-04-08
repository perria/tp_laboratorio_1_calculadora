#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    char seguir='s';
    int opc=0;
    float numUno=0;
    float numDos=0;
    float suma=0;
    float resta=0;
    float div=0;
    float multi=0;
    int fact=0;
    int opcion;

    while(seguir=='s')
    {

        opc = menu(opcion);

        switch(opc)
        {
            case 1:
                numUno = numeroU(numUno);
                break;
            case 2:
                numDos = numeroD(numDos);
                printf("el numero es: %f\n",numDos);
                break;
            case 3:
                suma=sumar(numUno, numDos);
                printf("La suma es:%f\n", suma);
                break;
            case 4:
                resta=restar(numUno, numDos);
                printf("La resta es:%f\n", resta);
                break;
            case 5:
                while(numDos==0)
                {
                    printf("No se puede dividir por cero\n");
                    break;
                }
                div=dividir(numUno, numDos);
                printf("La division es:%f\n", div);
                break;
            case 6:
                multi=multiplicar(numUno, numDos);
                printf("La multiplicacion es:%f\n", multi);
                break;
            case 7:
                fact=factorial(numUno);
                printf("El factoreal es:%d\n", fact);
                break;
            case 8:
                suma=sumar(numUno, numDos);
                printf("La suma es:%f\n", suma);

                resta=restar(numUno, numDos);
                printf("La resta es:%f\n", resta);

                while(numDos==0)
                {
                    printf("No se puede dividir por cero\n");
                    break;
                }
                div=dividir(numUno, numDos);
                printf("La division es:%f\n", div);

                multi=multiplicar(numUno, numDos);
                printf("La multiplicacion es:%f\n", multi);

                fact=factorial(numUno);
                printf("El factoreal es:%d\n", fact);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Ingrese un numero valido de 1 a 9\n");
                break;

        }


    }
return 0;
}
