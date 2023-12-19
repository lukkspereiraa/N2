#include <stdio.h>

unsigned long long calcularFatorial(int numero) {
    if (numero < 0) {
        return 0;
    } else if (numero == 0 || numero == 1) {
        return 1;
    } else {
        unsigned long long resultado = 1;
        for (int i = 2; i <= numero; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}

int main() {
    int num;

    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num);

    unsigned long long fatorial = calcularFatorial(num);

    if (fatorial == 0) {
        printf("O fatorial não pode ser calculado para números negativos.\n");
    } else {
        printf("O fatorial de %d é: %llu\n", num, fatorial);
    }

    return 0;
}
