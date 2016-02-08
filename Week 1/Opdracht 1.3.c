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

void drawHorizontalHistogram(int,int[]);

void Opdracht1_13() {
	int counter = 0;
	char c = 0;
	int words[15];

	for (int i = 0; i < sizeof(words); i++) {
		words[i] = 0;
	}
	
	
	printf("typ a word and press '0' \n");
	while (1) {
		c = getchar();
			
		if (c == '0') {
			//string ended and draw the histogram
			drawHorizontalHistogram(15, words);
		}
		else if (c == ' ') {
			counter ++;
		}
		else {
			words[counter]++;
		}
	}
	
}

void drawHorizontalHistogram(int maxLength, int words[]) {
	
	//for each length of words
	for (int i = 1; i < maxLength; i++) {
		printf("%2d:", i);
		
		int j = 0;
		//check for each length which words are the same length
		for (; j < 15; j++){
			if (words[j] == i)
				//print a  *
				putchar('*');
		}
		printf("\n");
	}
}