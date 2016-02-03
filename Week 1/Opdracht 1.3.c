#include <stdio.h>

void Opdracht1_3();
void Opdracht1_4();
void Opdracht1_13();

void main() {
	
	//Opdracht1_3();
	//Opdracht1_4();
	Opdracht1_13();

}


void Opdracht1_3() {
	int laagste = 0;	//laagste temperatuur 
	int hoogste = 300;	//hoogste temperatuur
	int interval = 20;	//grootte van het interval
	float fahr, celsius;		
	fahr = laagste;
	printf("Fahrenheit:\tCelsius:\n");					//print headers
	//print all requested degrees
	while (fahr <= hoogste)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);			//calculate celcius
		printf("%3.0f \t\t %6.1f\n",fahr, celsius);		//print values
		fahr += interval;								//add interval value
	}
}

void Opdracht1_4() {
	printf("\n");

	float fahr;
	float celsius = 0;
	int hoogste = 50;
	int interval = 5;

	printf("Celsius Fahrenheit \n");
	while (celsius <= hoogste)
	{
		fahr = (celsius * (9.0 / 5.0)) + 32.0;
		printf("%3.0f %11.1f \n", celsius, fahr);
		celsius += interval;
	}
}

void Opdracht1_13() {
	char strings[3][10];
	strcpy(strings[0], "hello");
	strcpy(strings[1], "world");
	strcpy(strings[2], "osidjfaoijfsaofij");
	
	for (int i = 0; i < 2; i++) {
		//printf(strings[i]);
		printf("\n");
		for (int j = 0; j < 3; j++) {
			printf("*");
		}
		
	}
	printf("\n");
}