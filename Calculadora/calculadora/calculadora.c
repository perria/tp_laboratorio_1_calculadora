#include <stdio.h>
#include "calculadora.h"

/** \brief pedir primer numero
 *
 * \param variable x
 * \return numero
 *
 */


float numeroU(float numUno){
    float x = 0;
    printf("Ingrese un numero\n");
    scanf("%f", &x);
    printf("el numero es: %f",x);
    return x;
}

/** \brief pedir segundo numero
 *
 * \param variable x
 * \return numero x
 *
 */

float numeroD(float numDos){
    float x = 0;
    printf("Ingrese otro numero\n");
    scanf("%f", &x);
    return x;
}

/** \brief sumar dos numeros
 *
 * \param variable a
 * \param variable b
 * \return resultado de la suma
 *
 */


float sumar(float a, float b)
{
    float resul=0;
    resul=a+b;
    return resul;
}

/** \brief restar dos numeros
 *
 * \param variable a
 * \param variable b
 * \return resultado de la resta
 *
 */

float restar(float a, float b)
{
    float resul;
    resul=a-b;
    return resul;
}

/** \brief multiplicar dos numeros
 *
 * \param variable a
 * \param variable b
 * \return resultado de la multiplicación
 *
 */

float multiplicar(float a, float b)
{
    float resul;
    resul=a*b;
    return resul;
}

/** \brief dividir dos numeros
 *
 * \param variable a
 * \param variable b
 * \return resultado de la división
 *
 */

float dividir(float a, float b)
{
    float resul;
    resul=a/b;
    return resul;
}

/** \brief factoriar un numero
 *
 * \param variable numero
 * \return resultado del factoreo
 *
 */

int factorial(int numero)
{
if ( numero == 1 || numero == 0 )
return 1;
else
return numero*factorial(numero-1);
}

/** \brief menu a mostrar
 *
 * \param texto a mostrar
 * \param texto error a mostrar
 * \return muestra segun el numero ingresado
 *
 */

int menu(int opcion)
{

    char error[]="Ingrese un numero valida entre 1 y 9\n";
    char texto[]="1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n";

    printf("%s", texto);

    scanf("%d", &opcion);

   while(opcion<1 || opcion>9)
    {
        char aux;
        int hola;
        printf("%s", error);

        printf("Desea salir? S/N\n");

        scanf("%c", &aux);

        if(aux == 'n'){

            printf("Elegi una opcion valida del menu\n");
            printf("%s", texto);

            scanf("%d",&opcion);

        } if (aux == 's') {

            hola = 9;

            return hola;
        }

    }
return opcion;
}
