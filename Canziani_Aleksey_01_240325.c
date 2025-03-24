/*
Autore: Canziani Aleksey
Versione: 1.0
Data build: 24/03/25
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void dtob (uint8_t param) {

char bin[9] = {'0', '0', '0', '0', '0', '0', '0', '0' };

uint8_t i = 8;

	while (param != 0) {

		if ((param %2) == 0) {
			printf("\n%d viene diviso per 2 e non ha resto. Ultimo valore 0\n", param);
			bin[i] = '0';
		} else {
			printf("\n%d viene diviso per 2 ed ha resto. Ultimo valore 1\n", param);
			bin[i] = '1';
		}

	param /= 2;
	i--;
	}

/*
if (param == 0) {
	bin[i] = '0';
}
*/

printf("\nIl valore convertito in binario e': %s\n", bin);
}

int main (int argc, char* argv[]) {

uint8_t num1;
uint8_t num2;

	if (argc != 3) {

		printf("\nERRORE!: I parametri immessi non sono sufficienti o sono superiori a quanto richiesto.\n");
		return -1;

	}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d", num1);
printf("%d", num2);

	if (num1 > 255 || num2 > 255) {

		printf("\nERRORE!: Uno o più parametri superano il limite numerico imposto.\n");
		return -1;
	}

	if (num1 < 0 || num2 < 0) {

		printf("\nERRORE!: Uno o più parametri sono valori negativi.\n");
		return -1;
	}

dtob(num1);
dtob(num2);

return 0;
}
