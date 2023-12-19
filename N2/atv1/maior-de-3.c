#include <stdio.h>

int maiorEntreDois(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int maiorEntreTres(int a, int b, int c) {
    return maiorEntreDois(maiorEntreDois(a, b), c);
}

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    int maior = maiorEntreTres(num1, num2, num3);
    printf("O maior número é: %d\n", maior);

    return 0;
}
