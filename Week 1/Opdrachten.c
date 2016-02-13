#include <stdio.h>
#include "Opdrachten.h"
#include <string.h>
#include <ctype.h>

void main() {
	
	//Opdracht1_3();
	//Opdracht1_4();
	//Opdracht1_13();
	//opdracht1_17();
	opdracht1_18();
	//opdracht2_5();
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

//schrijf een programma dat alle invoerregels afdrukt die langer zijn dan 80 tekens
void opdracht1_17()
{
	int i = 0;
	int j = 0;
	char c[9999] = { ')' };

	scanf("%[^\n]%*c", c); //telt spaties mee met input
	for (i = 0; i < sizeof(c); i++) // telt aantal characters in array
	{
		if(!(c[i] == ')'))
		{
			j++;  
		}
	}
	if(j > 80)
	{
		printf(c); 
	}
	scanf("%s", c);
}

//schrijf een programma die alle spaties uit een stuk tekst haalt
void opdracht1_18()
{
	int i, j = 0;
	char c[9999] = {0}; // maakt lijst vol met nullpointers
	char c1[9999] ={0}; //lijst zonder spaties

	scanf("%[^\n]%*c", c);

	for (i = 0; c[i] != 0; i++)
		if (c[i] != ' ') //controleert op spaties
		{
			c1[j] = c[i]; //kopieert naar andere array
			j++;
		}

	printf(c1);
	scanf("%s", c);
}

//schfijf een functie die als resultaat de positie levert van het eerste teken in s1 dat ook in s2 voorkomt
//als geen enkel teken overeen komt geeft de functie -1 terug
void opdracht2_5()
{
	char c;
	int result = 0;
	char s1[] = "mooie";
	char s2[] = "test";
	result = compare(s1, s2) + 1;
	printf("%i \n", result);
	c = getchar();
}

int compare(char s1[], char s2[])
{
	int i = 0;
	int j = 0;

	for (i = 0; i < sizeof(s1); i++) // krijg char uit array 1
	{
		for (j = 0; j < sizeof(s2); j++) // krijg char uit array 2
		{
			if (s1[i] == s2[j]) // verglijkt 2 chars met elkaar
			{
				return i;
			}
		}
	}
	return -1;
}

