/*
----- autore: Loris Guida -----
----- data: 24/03/25 -----
----- versione: 0.1 -----
*/
#include <stdio.h>
#include <stdlib.h>
void printBinary(int value) {
for (int i = 7; i >= 0; i--) {
        printf("%d", (value >> i) & 1);
}
    printf("\n");
}
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("numero errato di parametri. Solo 2 valori.\n");
        return 1;
    }
    //da stringa a intero
    int valore1 = atoi(argv[1]);
    int valore2 = atoi(argv[2]);
    //Controlla se i valori sono compresi tra 1 e 255
    if ((valore1 <= 0 || valore1 > 255) || (valore2 <= 0 || valore2 > 255)) {
        printf("i valori devono essere compresi tra 1 e 255.\n");
        return 2;
    }
    printBinary(valore1);
    printBinary(valore2);
        return 0;
}






