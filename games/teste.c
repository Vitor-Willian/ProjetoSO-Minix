#include <stdio.h>
#include <math.h> // Necessário para a função pow()

int main() {
    int i, k;
    int n = 5; // Exemplo: definindo n como 5
    int limite = 1 << n; // Isso calcula 2 elevado a n de forma eficiente

    for(i = 0; i < 12; i++) {
        for(k = 0; k < limite; k++) {
            printf("%d ", k);
        }
        printf("\n"); // Quebra de linha para organizar
    }

    return 0;
}
