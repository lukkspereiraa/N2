#include <stdio.h>

int somar(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int resultado = somar(num1, num2);

    printf("A soma de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}
