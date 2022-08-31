#include <stdio.h>
/**
 * main - a program that converts Centigrade to Fahrenheit
 * Return: Always 0 (Success)
 */
	int main(void)
{
	double Centigrade_temp;  /* degrees in centigrade */
	double Fahrenheit_temp; /* degrees in fahrenheit */

	printf("Input a temperature (in Centigrade): ");
	scanf("%lf", &Centigrade_temp);
	Fahrenheit_temp = Centigrade_temp * 1.8 + 32;
	printf("%lf in Fahrenheit.\n", Fahrenheit_temp);

	return (0);
}

