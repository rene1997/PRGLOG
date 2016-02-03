#include <stdio.h>

void  Opdracht1_3();

void main() {
	
	Opdracht1_3();
}


/// @param laagste: lowest temperature in Fahrenheid
/// @param hoogste: highest temperature int Fahrenheid
/// @param interval: the interval between output values
void Opdracht1_3() {
	int laagste = 0;	//laagste temperatuur 
	int hoogste = 300;	//hoogste temperatuur
	int interval = 20;	//grootte van het interval
	float fahr, celsius;		
	fahr = laagste;
	printf("Fahrenheid:\tCelsius:\n");					//print headers
	//print all requested degrees
	while (fahr <= hoogste)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);			//calculate celcius
		printf("%3.0f \t\t %6.1f\n",fahr, celsius);		//print values
		fahr += interval;						//add interval value
	}
}