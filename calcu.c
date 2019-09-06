#include "calcu.h"

int calcular()
{

    float x;
    float y;

    float rtaSuma;
    float rtaResta;
    float rtaProducto;
    float rtaCociente;
    float rtaFactorialX;
    float rtaFactorialY;


    //1 - PIDE EL PRIMER NUMERO
    printf("Por favor ingrese el primer número:");
    scanf("%f", &x);

    // 2 - PIDE EL SEGUNDO NUMERO
    printf ("Por favor ingrese el segundo número:");
    scanf("%f", &y);
    // 3 - REALIZA LAS OPERACIONES
    printf("\n\n\t A continuacion se presentan las operaciones \n \t de suma, resta, multiplicacion, division y \n \t factorial, para los valores %f y %f: \n\n", x,y);
    rtaSuma = sumar (x, y);
    rtaResta = restar (x, y);
    rtaProducto = multiplicar (x, y);
    if (y == 0)
    {
        rtaCociente = 0;
    }
    else
    {
        rtaCociente = dividir (x, y);
    }
    if (x>=0 && x<13)
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
    // 4 - MUESTRA LOS RESULTADOS
    printf ("   El resulado de %.2f + %.2f es: %.2f \n", x, y, rtaSuma);
    printf ("   El resulado de %.2f - %.2f es: %.2f \n", x, y, rtaResta);
    printf ("   El resulado de %.2f * %.2f es: %.2f \n", x, y, rtaProducto);
    if (rtaCociente==0)
    {
        printf ("   No se puede dividir por cero \n");
    }
    else
    {
        printf ("   El resulado de %.2f / %.2f es: %.2f \n", x, y, rtaCociente);
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

    printf("\n \n \n \t Pulse una tecla para salir. \n \n");
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

