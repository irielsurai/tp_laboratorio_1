#include "calcu.h"

int calcular()
{

    float x;    // primera variable
    float y;    // segunda variable

    // objetos que van a guardar togas las respuestas:
    float rtaSuma;
    float rtaResta;
    float rtaProducto;
    float rtaCociente;
    float rtaFactorialX;
    float rtaFactorialY;

    int flag;
    flag = 0;
    printf("Bienvenido a la calculadora!");

    while (flag ==0)
    {
        int menu;
        printf ("\n \n  Elija la opcion del menu que desea realizar:\n  MENU:\n  1 - Ingresar el primer número\n  2 - Ingresar el segundo número \n  3 - Realizar las operaciones \n  4 - Mostrar los resultados \n  5 - Salir \n \n  ");
        scanf("%d", &menu);
        while (menu > 5 || menu <1) // Validacion del valor del menu.
        {
            printf ("\n No es una opcion valida de menu. \n Por favor indique un numero entero entre 1 a 5: \n  MENU:\n  1 - Ingresar el primer número\n  2 - Ingresar el segundo número \n  3 - Realizar las operaciones \n  4 - Mostrar los resultados \n  5 - Salir \n \n  ");
            scanf("%d", &menu);
        }
        switch (menu)
        {
            case 1: //1 - PIDE EL PRIMER NUMERO
                printf("Por favor ingrese el primer numero:");
                scanf("%f", &x);
                break;
            case 2: // 2 - PIDE EL SEGUNDO NUMERO
                printf ("Por favor ingrese el segundo numero:");
                scanf("%f", &y);
                break;
            case 3: // 3 - REALIZA LAS OPERACIONES
                printf("\n\n\t Se han realizado las operaciones  de suma, \n \t resta, multiplicacion, division y factorial, \n \t para los valores %.2f y %.2f: satisfactoriamente. \n\n", x,y);
                rtaSuma = sumar (x, y);
                rtaResta = restar (x, y);
                rtaProducto = multiplicar (x, y);
                if (y == 0)     //validacion de la division
                {
                    rtaCociente = 0;
                }
                else
                {
                    rtaCociente = dividir (x, y);
                }
                if (x>=0 && x<13) //validacion de los factoriales
                {
                    rtaFactorialX = factoriar (x);
                }
                    else
                {
                    rtaFactorialX = -1;
                }
                if (y>=0 && y<13)
                {
                    rtaFactorialY = factoriar (y);
                }
                    else
                {
                    rtaFactorialY = -1;
                }
                break;
            case 4: // 4 - MUESTRA LOS RESULTADOS
                printf("\n \n   RESULTADOS:");
                printf ("\n   El resultado de %.2f + %.2f es: %.2f \n", x, y, rtaSuma);
                printf ("   El resultado de %.2f - %.2f es: %.2f \n", x, y, rtaResta);
                printf ("   El resultado de %.2f * %.2f es: %.2f \n", x, y, rtaProducto);
                if (rtaCociente==0)
                {
                    printf ("   Lo lamentamos. No se puede dividir por cero \n");
                    }
                else
                {
                    printf ("   El resultado de %.2f / %.2f es: %.2f \n", x, y, rtaCociente);
                }
                if (rtaFactorialX == -1)
                {
                    printf ("   El factorial de %.2f no puede calcularse.", x);
                }
                else
                {
                    printf ("   El factorial de %.2f es: %.2f", x,rtaFactorialX);
                }
                if (rtaFactorialY == -1)
                {
                    printf (" El factorial de %.2f no puede calcularse.", y);
                }
                else
                {
                    printf (" El factorial de %.2f es: %.2f", y,rtaFactorialY);
                }
                break;
            case 5: // SALE
                printf("\n \n \n \t Gracias por usar esta bella calculadora. \n \t Pulse una tecla para salir. \n \n");
                flag = 1; //El cambio de bandera hace que termine el while, y con él la calculadora
        }
    }
    return 0;
}

float sumar(float numero1, float numero2)
{
    float suma;
    suma = numero1 + numero2;
    return suma;
}

float restar(float numero1, float numero2)
{
    float resta;
    resta = numero1 - numero2;
    return resta;
}

float multiplicar(float numero1, float numero2)
{
    float producto;
    producto = numero1 * numero2;
    return producto;
}

float dividir(float numero1, float numero2)
{
    float cociente;
    cociente = numero1 / numero2;
    return cociente;
}

float factoriar(float numero1)
{
    float factorial;
    factorial = 1;

    for(numero1; numero1 > 0; numero1 --)
    {
        factorial = factorial * numero1;
    }
    return factorial;
}

