#include <stdio.h>

int ehNegativo(int numero) {
    return (numero < 0);
}

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (ehNegativo(num)) {
        printf("O número é negativo.\n");
    } else {
        printf("O número não é negativo.\n");
    }

    return 0;
}
