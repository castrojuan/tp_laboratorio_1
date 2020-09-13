/*
 ============================================================================
 Name        : TP1_Laboratorio1.c
 Author      : Juan Castro Div 1-E
 Version     :
 Copyright   : TP Laboratorio 1
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "CastroJuan.h"//Mi biblioteca

int main(void)

{
	setbuf(stdout, NULL);

//DECLARO VARIABLES
	int num1;
	int num2;
	int suma;
	int resta;
	float division;
	int multiplicacion;
	int factorialNum1;

//PROTOTIPOS FUNCIONES
	int sumar(int operando1, int operando2);
    int restar(int operando1, int operando2);
    float dividir(int operando1, int operando2);
    int multiplicar(int operando1, int operando2);
    int factorial1(int operando1);


//ENTRADA DE DATOS
	printf("\n Ingrese Primer Operando:   ");
	scanf("%d", &num1);

	printf("\n Ingrese Segundo Operando:  ");
	scanf("%d", &num2);


//OPERACIONES
	suma = sumar(num1 , num2);
	resta = restar(num1 , num2);
	division = dividir(num1 , num2);
	multiplicacion = multiplicar(num1 , num2);
	factorialNum1 = factorial1(num1);


//MOSTRAR RESULTADOS
	printf("\n El resultado de la Suma de los numeros es: %d \n", suma);
	printf("\n El resultado de la Resta entre los numeros es: %d \n", resta);

	if (num2 == 0)
	{
		printf("\n Error.No se puede dividir por 0 \n ");
	}

	else
	{
		printf("\n El resultado de la Division de los numeros es: %.2f \n",
				division);
	}

	printf("\n El resultado de la Multiplicacion es: %d \n",
			multiplicacion);

	printf("\n El factorial del primer numero es: %d \n",
			factorialNum1);

	return 0;
}
