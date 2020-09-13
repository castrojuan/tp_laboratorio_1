/*
 * CastroJuan.c
 *
 *  Created on: 12 sep. 2020
 *      Author: juan martin
 */


int sumar(int operando1, int operando2)
{
	int total;
	total = operando1 + operando2;

	return total;

}

int restar(int operando1, int operando2)
{
	int total;
	total = operando1 - operando2;

	return total;

}

float dividir(int operando1, int operando2)
{

	return (float) operando1 / operando2;

}

int multiplicar(int operando1, int operando2)
{

	int total;

	total = operando1 * operando2;

	return total;

}

int factorial1(int operando1)
{
	int total1;
	if (operando1 <= 1)
	{
		total1 = 1;
	}

	else
	{
		total1 = operando1 * (factorial1(operando1 - 1));
	}
	return total1;
}

