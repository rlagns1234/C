#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct city 
{
	char name[50];
	char country[50];
	long population;
}City;

void clearBuffer(void) {
	while (getchar() != '\n');
}

int main(void) {
	City cities[3] = {0};
	printf("Input three cities:\n");
	for (int i = 0; i < sizeof(cities) / sizeof(cities[0]); i++) {
		printf("Name> ");
		scanf("%[^\n]s", cities[i].name);
		clearBuffer();
		printf("Country> ");
		scanf("%[^\n]s", cities[i].country);
		clearBuffer();
		printf("Population> ");
		scanf("%ld", &(cities[i].population));
		clearBuffer();
	}

	printf("Printing the three cities:\n");
	for (int i = 0; i < sizeof(cities) / sizeof(cities[0]); i++) {
		printf("%d. %s in %s with a population of %d people\n", i+1, cities[i].name, cities[i].country, cities[i].population);
	}
}